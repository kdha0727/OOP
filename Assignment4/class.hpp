#ifndef OOP_AS4_CLASS_H
#define OOP_AS4_CLASS_H

#include <string>
#include "student.hpp"
using std::string;

class Class {
    /**
        Class class
    **/

private:
    // Data attribute
    string className, instructorName;
    int listLength, listCapacity;
    Student* list;

    // Internal function
    int studentIDtoIndex(int studentID) const;
    void listUpdate(int newLength, bool preserve=true);
    void _listReAllocate(int newCapacity, bool preserve=true);

public:
    // Constructor, Destructor, Overloaded assignment operator
    Class();
    Class(const string& newClassName, const string& newInstructorName);
    Class(const Class& other);
    ~Class();
    Class& operator =(const Class& other);

    // Member function
    void SetClassName(const string& newClassName, const string& newInstructorName);
    void Register(const string& studentName, int studentID);
    void Withdraw(int studentID);
    void Display() const;

};

#endif  // OOP_AS4_CLASS_H
