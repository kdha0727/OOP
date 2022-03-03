#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

class Student
{
public:
	Student()
	{
		mName = "";
		mID = 0;
		mAge = 0;
		mGpa = 0;
	}
	void SetStudentInfo(string name, int ID, int age, double gpa)
	{
		mName = name;
		mID = ID;
		mAge = age;
		mGpa = gpa;
	}
	string GetName(){return mName;}
	int GetID(){return mID;}
    //add member functions that can return age and gpa
	int GetAge(){return mAge;}
	double GetGpa(){return mGpa;}
private:
	string mName;
	int mID;
	int mAge;
	double mGpa;

};

void ShowEldestStudents(Student s[],int sNum)
{
	string star(23,'*');
	cout<<star<<endl;
	cout <<"Display Eldest Students"<<endl;
	cout<<star<<endl;
	// Problem 2-1 : Display eldest students personal information
	// input : students array, num of student
	// output format : cout<<name<<"\t"<<id<<"\t"<<age<<"\t"<<gpa<<endl;

	// declare values
	int loopNum, maxAge(0);
	Student _s;
	// loop and search max age
	for (loopNum=0; loopNum<sNum; loopNum++) {
	    maxAge = max(maxAge, s[loopNum].GetAge());
	}
	// print student info of max age
    for (loopNum=0; loopNum<sNum; loopNum++) {
        _s = s[loopNum];
        if(_s.GetAge()==maxAge) {
            cout << _s.GetName() << "\t" << _s.GetID() << "\t"
                 << _s.GetAge() << "\t" << _s.GetGpa() << endl;
        }
    }
}

double ScholarshipStudentAge(Student s[],int sNum)
{
	// Problem 2-2 : Return average age of students who can get Scholarship
	// input : students array, num of student
	// output(double) : average age of students with a gpa of 4.0 or higher

    // declare values
    int loopNum, sumAge(0), numAge(0);
    Student _s;
    // loop for students in s[]
    for (loopNum=0; loopNum<sNum; loopNum++) {
        _s = s[loopNum];
        if(_s.GetGpa()>=4.0) {  // if student can get scholarship, add student info into values
            sumAge += _s.GetAge();
            numAge ++;
        }
    }
    return (numAge) ? ((float)sumAge/(float)numAge) : 0;  // return value
}



/*
You MUST NOT touch the code below.
If modified temporally, make sure you've restored the code when submitting.
*/

int main()
{
	int studentNum;
	ifstream infile("input2.txt");
	infile >> studentNum;

	Student students[studentNum];

	for (int i=0; i<studentNum; i++)
	{
		string studentName;
		int studentID;
		int studentAge;
		double studentGpa;

		infile >> studentName;
		infile >> studentID;
		infile >> studentAge;
		infile >> studentGpa;

		students[i].SetStudentInfo(studentName, studentID, studentAge, studentGpa);
	}

	cout <<"Average age of students who can receive scholarship : ";
	cout<<fixed<<setprecision(2)<<ScholarshipStudentAge(students,studentNum)<<endl;
	ShowEldestStudents(students,studentNum);
	return 0;
}
