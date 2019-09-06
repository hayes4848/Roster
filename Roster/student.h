#include <string>
#include "degree.h"
using namespace std;

class Student {

  public:
    const static int dayCompletionSize = 3;

  protected:
    int studentID;
    std::string first_name;
    string last_name;
    string email_address;
    int age;
    int numDaysToComplete[dayCompletionSize];
    Degree dtype;


  public: 
    Student();
    Student(int studentID, string first_name, string last_name, string email_address, int age, int numDaysToComplete[]);
    void SetStudentID(int studentID);
    void SetFirstName(std::string first_name);
    void SetLastName(std::string last_name);
    void SetEmailAddress(std::string email_address);
    void SetAge(int age);
    void SetNumDaysToComplete(int numDaysToComplete[]);
    virtual Degree getDegreeType() = 0;
    virtual void Print() = 0;
    
    int GetStudentID();
    std::string GetFirstName();
    std::string GetLastName();
    std::string GetEmailAddress();
    int GetAge();
    int* GetNumDaysToComplete();
};