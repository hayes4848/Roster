#pragma once
#include <string>
#include "degree.h"
using namespace std;

class Student {

  public:
    const static int dayCompletionSize = 3;

  protected:
    std::string studentID;
    std::string first_name;
    string last_name;
    string email_address;
    int age;
    int numDaysToComplete[dayCompletionSize];
    Degree dtype;


  public: 
    Student();
    Student(string studentID, string first_name, string last_name, string email_address, int age, int numDaysToComplete[]);
    void SetStudentID(std::string studentID);
    void SetFirstName(std::string first_name);
    void SetLastName(std::string last_name);
    void SetEmailAddress(std::string email_address);
    void SetAge(int age);
    void SetNumDaysToComplete(int numDaysToComplete[]);
    virtual Degree getDegreeProgram() = 0;
    virtual void Print() = 0;
    
    std::string GetStudentID();
    std::string GetFirstName();
    std::string GetLastName();
    std::string GetEmailAddress();
    int GetAge();
    int* GetNumDaysToComplete();
};