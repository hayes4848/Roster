#include<string>
#include<iostream>
#include "student.h"
#include "softwareStudent.h"
#include "securityStudent.h"
#include "networkStudent.h"


int main() {
const string studentData[] =
 {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
 "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
 "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
 "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
 "A5,Andrew,Hayes,ahaye68@wgu.edu,32,10,15,20,SOFTWARE"};

  int days[3] = {1,2,3};
  SoftwareStudent freshman(10, "Andy", "Scott", "ahayes@wgu.edu", 32, days, SOFTWARE);
  std::cout << freshman.GetStudentID() << "\n";
  std::cout << freshman.GetFirstName() << "\n";
  std::cout << freshman.GetEmailAddress() << "\n";
  freshman.Print();

  for(int i=0; i<5; i++){
    std::cout << studentData[i] << "\n";
  }
}