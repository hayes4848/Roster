#include <string>
#include <iostream>
#include "student.h"

Student::Student(){
	studentID = 100;
	first_name = "Linsey";
	last_name = "Hayes";
  email_address = "linsey@wgu.edu";
  age = 32;
	for (int i = 0; i<dayCompletionSize; i++) numDaysToComplete[i] = 0;
       return;
}

Student::Student(std::string studentID, std::string first_name, std::string last_name, std::string email_address, int age, int numDaysToComplete[])
{
   this->studentID = studentID;
   this->first_name = first_name;
   this->last_name = last_name;
   this->email_address = email_address;
   this->age = age;
   for (int i = 0; i<dayCompletionSize; i++) this->numDaysToComplete[i] = numDaysToComplete[i];
}

//SETTERS
void Student::SetStudentID(std::string studentID){
  this->studentID = studentID;
}

void Student::SetFirstName(std::string first_name){
  this->first_name = first_name;
}

void Student::SetLastName(std::string last_name){
  this->last_name = last_name;
}

void Student::SetEmailAddress(std::string email_address){
  this->email_address = email_address;
}

void Student::SetAge(int age){
  this->age = age;
}

void Student::SetNumDaysToComplete(int numDaysToComplete[]){
  for(int i=0; i < dayCompletionSize; i++ ){ this-> numDaysToComplete[i] = numDaysToComplete[i] ;}
}

//GETTERS
std::string Student::GetStudentID(){
  return studentID;
}

std::string Student::GetFirstName(){
  return first_name;
}

std::string Student::GetLastName(){
  return last_name;
}

std::string Student::GetEmailAddress(){
  return email_address;
}

int Student::GetAge(){
  return age;
}

int* Student::GetNumDaysToComplete(){
  return numDaysToComplete;
}

void Student::Print(){
  std::cout << "Print Something\n";
}

Degree Student::getDegreeProgram(){}
