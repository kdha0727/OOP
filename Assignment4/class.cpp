#include "class.hpp"
#include <iostream>

Class::Class(): listLength(0), listCapacity(0), list(nullptr) {
    /** Default constructor */
}

Class::Class(const string &newClassName, const string &newInstructorName) {
    /** Constructor with class name and instructor name */
    // Initialize default values - with default constructor
    listLength = 0;
    listCapacity = 0;
    list = nullptr;
    // Copy names from parameter
    className = newClassName;
    instructorName = newInstructorName;
}

Class::Class(const Class& other): listLength(0), listCapacity(0), list(nullptr)  {
    /** Copy constructor */
    *this = other;  // Copy with pointer
}

Class& Class::operator =(const Class& other) {
    /** Copy operator */
    if (this != &other) {  // Avoid self assignment
        // Re-assign variables
        className = other.className;
        instructorName = other.instructorName;
        // Copy student
        listUpdate(other.listLength, false);
        for(int i=0; i<other.listLength; i++) {
            list[i] = other.list[i];
        }
    }
    return *this;
}

Class::~Class() {
    /** Destructor */
    delete[] list;
}

int Class::studentIDtoIndex(int studentID) const {
    /** Converts Student ID to list index */
    for (int i = 0; i < listLength; i++) {  // Search
        if(list[i].getID() == studentID) {  // Match
            return i;
        }
    }
    return -1;  // Not found
}

void Class::_listReAllocate(int newCapacity, bool preserve) {
    /**
        Allocate new list and deallocate old list,
        and update list capacity value.
        If want to preserve, some data will be copied from old list.
    */
    Student* listOld = list;
    list = new Student[newCapacity];
    // If needed, copy old students while updating
    if(preserve) {
        for (int i = 0; i < ((listLength < newCapacity) ? listLength : newCapacity); i++) {
            list[i] = listOld[i];
        }
    }
    delete[] listOld;
    // Update capacity
    listCapacity = newCapacity;
}

void Class::listUpdate(int newLength, bool preserve) {
    /**
        Update length value to given value,
        and reallocate list (if needed).
    */
    // Calculate new capacity by new length given
    int newCapacity = ((newLength > 0)? 1: 0);  // Let new capacity be pow(2, n) or 0
    while((newCapacity < newLength)) {
        newCapacity *= 2;  // If capacity is smaller than required, double capacity
    }

    // If needed, update capacity and re-allocate student list
    if(newCapacity != listCapacity) {
        _listReAllocate(newCapacity, preserve);
    }

    // Update length value
    listLength = newLength;
}

void Class::SetClassName(const string& newClassName, const string& newInstructorName) {
    /** Set the name of class and the name of professor */
    className = newClassName; instructorName = newInstructorName;
}

void Class::Register(const string& studentName, int studentID){
    /** Create new student corresponding name and ID */
    // Update list length
    int index = listLength;
    listUpdate(listLength + 1, true);

    // Register new student
    list[index].setID(studentID);
    list[index].setName(studentName);
}

void Class::Withdraw(int studentID){
    /** Delete student from student list of the class */
    // Search student
    int index = studentIDtoIndex(studentID);
    if (index == -1) {
        return;  // ID does not exist
    }

    // Shift student
    for (int i = index; i < listLength - 1; i++) {
        list[i] = list[i + 1];
    }

    // Update list length
    listUpdate(listLength - 1, true);
}

void Class::Display() const {
    /** Print information about the class */
    // Using output stream
    using std::cout;
    using std::endl;

    // Print base information
    cout << "Prof. :" << instructorName << "\t\tClass Name :" << className << "\n"
            "-------------------------------------------------------------------\n"
            "Total number of students : " << listLength << "\n"
            "List Capacity :" << listCapacity << "\n\n";

    // Print each student's information
    for (int i = 0; i < listLength; i++) {
        cout << list[i].getName() << "\t\t" << list[i].getID() << "\n";
    }

    // Print newline and flush output stream
    cout << "\n\n" << endl;
}
