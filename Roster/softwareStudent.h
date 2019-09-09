#pragma once
#include <string>
#include "student.h"

class SoftwareStudent : public Student{

public:
	SoftwareStudent();
	SoftwareStudent(
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

	~SoftwareStudent();
};