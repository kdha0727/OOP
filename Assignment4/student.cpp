#include "student.hpp"

Student::Student() : ID(0) {
    // Default constructor
}

Student::Student(int newID, const string& newName) {
    // Constructor with id and name
    ID = newID;
    name = newName;
}

Student::Student(const Student& other) {
    // Copy constructor
    ID = other.ID;
    name = other.name;
}

Student& Student::operator =(const Student& other) {
    // Copy operator
    if (this != &other) {  // Prevent self-copy
        name = other.name;
        ID = other.ID;
    }
    return *this;
}

void Student::setID(int newID) { ID = newID; }  // ID setter

void Student::setName(const string& newName) { name = newName; }  // name setter

int Student::getID() const { return ID; }  // ID getter

string Student::getName() const { return name; }  // name getter
