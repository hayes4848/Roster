#include<string>
#include <sstream>
#include <vector>
#include<iostream>
#include "student.h"
#include "softwareStudent.h"
#include "securityStudent.h"
#include "networkStudent.h"
#include "roster.h"


Roster::Roster() {
  this->capacity = 0;
  this->classRosterArray = nullptr;
};

void Roster::parseData(std::string data){
  stringstream ss(data);
  vector<std::string> result;
  while( ss.good() ){
      std::string substr;
      getline( ss, substr, ',' );
      result.push_back( substr );
  }
  for(int i=0; i<9; i++){
    std::cout << result[i] << "\n";
  }
};

void Roster::add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree dt){
	int daysInClass[Student::dayCompletionSize];
	daysInClass[0] = daysInCourse1;
	daysInClass[1] = daysInCourse2;
	daysInClass[2] = daysInCourse3;
	if (dt == SOFTWARE) classRosterArray[lastIndex] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, daysInClass, dt);
	else if (dt == NETWORKING) classRosterArray[lastIndex] = new NetworkStudent(studentID, firstName, lastName, emailAddress, age, daysInClass, dt);
  else classRosterArray[lastIndex] = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, daysInClass, dt);
};
void Roster::remove(std::string studentID){

};
void Roster::printAll(){

}; //should loop through all students in array, and print according to rubric.
void Roster::printDaysInCourse(std::string studentID){

}; //should print *average* of the days in course for the student identified by the student ID param
void Roster::printInvalidEmails(){

};
void Roster::printByDegreeProgram(int degreeProgram){

};


int main() {
const string studentData[] =
 {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
 "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
 "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
 "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
 "A5,Andrew,Hayes,ahaye68@wgu.edu,32,10,15,20,SOFTWARE"};

 Roster* classRoster = new Roster();

 for (int i=0; i<5; i++){
   classRoster->parseData(studentData[i]);
 }

  // int days[3] = {1,2,3};
  // SoftwareStudent softwareFreshman(10, "Andy", "Scott", "ahayes@wgu.edu", 32, days, SOFTWARE);
  // std::cout << softwareFreshman.GetStudentID() << "\n";
  // std::cout << softwareFreshman.GetFirstName() << "\n";
  // std::cout << softwareFreshman.GetEmailAddress() << "\n";
  // softwareFreshman.Print();

  // SecurityStudent securityFreshman(11, "Ricky", "Bobby", "rbobby@wgu.edu", 21, days, SECURITY);
  // std::cout << securityFreshman.GetStudentID() << "\n";
  // std::cout << securityFreshman.GetFirstName() << "\n";
  // std::cout << securityFreshman.GetEmailAddress() << "\n";
  // securityFreshman.Print();

  // NetworkStudent NetworkFreshman(11, "Someone", "Else", "selse@wgu.edu", 45, days, NETWORKING);
  // std::cout << NetworkFreshman.GetStudentID() << "\n";
  // std::cout << NetworkFreshman.GetFirstName() << "\n";
  // std::cout << NetworkFreshman.GetEmailAddress() << "\n";
  // NetworkFreshman.Print();


  // classRoster.printAll();
  // classRoster.printInvalidEmails();
  // //loop through classRosterArray and for each element:
  // classRoster.printAverageDaysInCourse(/*current_object's student id*/);
  // classRoster.printByDegreeProgram(SOFTWARE);
  // classRoster.remove("A3");
  // classRoster.remove("A3");
  // //expected: the above line should print a message saying such a student with this ID was not found.
}