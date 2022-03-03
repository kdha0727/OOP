#ifndef OOP_AS4_STUDENT_H
#define OOP_AS4_STUDENT_H

#include <string>
using std::string;

class Student {
    /**
        Student class
    **/

private:
    // Data attribute
    int ID;
    string name;

public:
    // Constructor
    Student();
    Student(int newID, const string& newName);
    Student(const Student& other);

    // Copy operator
    Student& operator =(const Student& other);

    // Setter function
    void setID(int newID);
    void setName(const string& newName);

    // Getter function
    int getID() const;
    string getName() const;

};

#endif  // OOP_AS4_STUDENT_H
