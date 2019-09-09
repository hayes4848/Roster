#pragma once
#include <string>
#include "student.h"

class Roster {
  private: 
    Student** classRosterArray;
    int capacity;
    int lastIndex;

  public:
    Roster();
    Roster(int capacity);
    void parseData(std::string data);
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree dt);
    void remove(string studentID);
    void printAll(); //should loop through all students in array, and print according to rubric.
    void printDaysInCourse(string studentID); //should print *average* of the days in course for the student identified by the student ID param
    void printInvalidEmails();
    void printByDegreeProgram(int degreeProgram);

    ~Roster();
};