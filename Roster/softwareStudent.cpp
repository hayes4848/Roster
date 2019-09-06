#include <iostream>
#include "softwareStudent.h"

SoftwareStudent::SoftwareStudent():Student(){
    dtype = SOFTWARE;
}

SoftwareStudent::SoftwareStudent(int studentID, std::string first_name, std::string last_name, std::string email_address, int age, int numDaysToComplete[], Degree degreetype )
	:Student(studentID, first_name, last_name, email_address, age, numDaysToComplete)
{
	dtype = SOFTWARE;
}

Degree SoftwareStudent::getDegreeProgram(){
	return SOFTWARE;
}

void SoftwareStudent::Print()
{
	this->Student::Print();
	std::cout << "SOFTWARE" << "\n";
}

SoftwareStudent::~SoftwareStudent()
{
	Student::~Student();
}
