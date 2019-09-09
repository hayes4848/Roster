#pragma once
#include <string>
#include "student.h"

class SecurityStudent : public Student{

public:
	SecurityStudent();
	SecurityStudent(
		string studentID,
		string first_name,
		string last_name,
    string email_address,
    int age,
		int numDaysToComplete[],
		Degree degreetype
	);

	Degree getDegreeProgram();
	void Print();

	~SecurityStudent();
};