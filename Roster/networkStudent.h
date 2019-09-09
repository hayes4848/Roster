#pragma once
#include <string>
#include "student.h"

class NetworkStudent : public Student{

public:
	NetworkStudent();
	NetworkStudent(
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

	~NetworkStudent();
};