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
  this->lastIndex = -1;
  this->classRosterArray = new Student*[5];
};

Student * Roster::getStudentByID(int index){
  return classRosterArray[index];
};

void Roster::parseData(std::string data){
  stringstream ss(data);
  vector<std::string> result;
  Degree degType;
  
  lastIndex++;

  while( ss.good() ){
      std::string substr;
      getline( ss, substr, ',' );
      result.push_back( substr );
  }
  if(result[8] == "SECURITY") {
    degType = SECURITY;
  }
  if(result[8] == "SOFTWARE") {
    degType = SOFTWARE;
  }

  if(result[8] == "NETWORKING") {
    degType = NETWORKING;
  }
  add(result[0], result[1], result[2], result[3], stoi(result[4]), stoi(result[5]), stoi(result[6]), stoi(result[7]), degType);
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
  bool studentExists = false;
  for(int i=0; i<5; i++){
    if(this->classRosterArray[i]->GetStudentID() == studentID){
      studentExists = true;
    }
  }
};

void Roster::printAll(){
  for(int i=0; i<5; i++){
    std::cout << i;
    this->classRosterArray[i]->Print();
  }
};

void Roster::printAverageDaysInCourse(std::string studentID){

  for(int i=0; i<5; i++){
    if(this->classRosterArray[i]->GetStudentID() == studentID){
      int average = 0;
      average += classRosterArray[i]->GetNumDaysToComplete()[0];
      average += classRosterArray[i]->GetNumDaysToComplete()[1];
      average += classRosterArray[i]->GetNumDaysToComplete()[2];
      average = average / 3;
      std::cout << "Average number of days: " << average << "\n";
    }
  }
};

void Roster::printInvalidEmails(){
  std::cout << "\n" << "\n" << "Invalid Emails: " << "\n";
  for(int i=0; i<5; i++){
    std::string email = this->classRosterArray[i]->GetEmailAddress();
    auto at = email.find("@");
    auto period = email.find(".");
    auto space = email.find(" ");
    if( at == string::npos || period == string::npos || space != string::npos){
      std::cout << email << "\n";
    }
  }
};

void Roster::printByDegreeProgram(Degree degreeProgram){
  for(int i=0; i<5; i++){
    if(this->classRosterArray[i]->getDegreeProgram() == degreeProgram){
      this->classRosterArray[i]->Print();
    }
  }
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

  // classRoster->printAll();

  // classRoster->printInvalidEmails();

  // for(int i=0; i<5; i++){
  //   classRoster->printAverageDaysInCourse(classRoster->getStudentByID(i)->GetStudentID());
  // }

  // classRoster->printByDegreeProgram(SOFTWARE);

  classRoster->remove("A3");
  // classRoster.remove("A3");
  // //expected: the above line should print a message saying such a student with this ID was not found.
}