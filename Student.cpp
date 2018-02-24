#include "Student.h"

#include <iostream>

Student::Student() {
	// TO BE COMPLETED
	
	//creates student obj.
	//initializes its cwid to nothing.
	//gives student 
	
}

Student::Student(const string &cwid) {
	// TO BE COMPLETED
	
	//refereneces cwid
	//starts student obj courses to 0.
}

//COMPLETE.
string Student::getCWID() { 
	return cwid;
}

void Student::addCourseGrade (const string &courseName, char grade) {
	// TO BE COMPLETED
	
	//allocates new mem for course name and grade.
	//increases course grade amount by 1.
}

//COMPLETE. 
double Student::getGPA() { 
	//gpa is calculated from adding all values and dividing by the number of courses
	char grade;
	double gpa;
	double sum = 0, total = 0;
	
	for (int i=0; i < courseNum; i++)
	{
		grade = Cgrade[i]; //switch statement to apply a value to a grade.
		switch grade {
			case 'A':
				sum = 4;
				break;
			case 'B':
				sum = 3;
				break;
			case 'C':
				sum = 2;
				break;
			case 'D':
				sum = 1;
				break;
			default:
				sum = 0;
		}
		total = total + sum; //adds up all the values.
	}
	gpa = total / courseNum;
	return gpa;//Returns GPA.
}

// print transcript in this (sample) format:
// TRANSCRIPT FOR CWID=279750343
// CS 121		C
// CS 253		B
// CS 131		B
// GPA = 2.6667

//COMPLETE.
void Student::printTranscript() { 
	cout<< "TRANSCRIPT FOR CWID= " << cwid <<endl; //Displays CWID of student.
	for (int i=0; i <= courseNum; i++) //Loops through the number of courses.
	{
		cout<< courseName[i] << " " << courseGrade[i] << endl; //Displays name of course and corresponding grade.
	}
	cout<< "GPA= " << getGPA() << endl;//Displays GPA of Current Student.
}
