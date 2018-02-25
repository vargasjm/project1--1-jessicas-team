#pragma once
#include <string>

using namespace std;

class Registrar;

class Student {
public:
	Student(); // default constructor
	Student(const string &cwid); // constructor with parameter
	void addCourseGrade(const string &courseName, char grade); // add course name and grade to student's record
	double getGPA(); // calculate and return GPA
	void printTranscript(); // print transcript - see Student.cpp for the format
	string getCWID(); // return the CWID of this student
private:
	// any private member variables and methods go here
	// TO BE COMPLETED
	string courseName, cwid;
	double gpa;
	int courseNum, num = 0, count;
	char Cgrade[50], grade;
	string Tcourse[50];

	friend class Registrar;
};
