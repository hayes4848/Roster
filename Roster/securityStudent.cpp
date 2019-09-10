#include <iostream>
#include "securityStudent.h"

SecurityStudent::SecurityStudent():Student(){
    dtype = SECURITY;
}

SecurityStudent::SecurityStudent(string studentID, std::string first_name, std::string last_name, std::string email_address, int age, int numDaysToComplete[], Degree degreetype )
	:Student(studentID, first_name, last_name, email_address, age, numDaysToComplete)
{
	dtype = SECURITY;
}

Degree SecurityStudent::getDegreeProgram(){
	return SECURITY;
}

void SecurityStudent::Print()
{
	this->Student::Print();
	std::cout << "Degree Program: " << "SECURITY" << "\n";
}

SecurityStudent::~SecurityStudent()
{
	Student::~Student();
}
