#include <string>
#include "student.h"

class SoftwareStudent : public Student{

public:
	SoftwareStudent();
	SoftwareStudent(
		int studentID,
		string first_name,
		string last_name,
    string email_address,
    int age,
		int numDaysToComplete[],
		Degree degreetype
	);

	Degree getDegreeType();
	void Print();

	~SoftwareStudent();
};