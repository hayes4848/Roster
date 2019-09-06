#include<string>
#include<iostream>
#include "softwareStudent.h"

int main() {
  int days[3] = {1,2,3};
  SoftwareStudent freshman(10, "Andy", "Scott", "ahayes@wgu.edu", 32, days, SOFTWARE);
  std::cout << freshman.GetStudentID() << "\n";
  std::cout << freshman.GetFirstName() << "\n";
  std::cout << freshman.GetEmailAddress() << "\n";
  freshman.Print();
}