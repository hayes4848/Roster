#include <iostream>
#include "networkStudent.h"

NetworkStudent::NetworkStudent():Student(){
    dtype = NETWORKING;
}

NetworkStudent::NetworkStudent(int studentID, std::string first_name, std::string last_name, std::string email_address, int age, int numDaysToComplete[], Degree degreetype )
	:Student(studentID, first_name, last_name, email_address, age, numDaysToComplete)
{
	dtype = NETWORKING;
}

Degree NetworkStudent::getDegreeProgram(){
	return NETWORKING;
}

void NetworkStudent::Print()
{
	this->Student::Print();
	std::cout << "NETWORKING" << "\n";
}

NetworkStudent::~NetworkStudent()
{
	Student::~Student();
}