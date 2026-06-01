#include<iostream>

using namespace std;

 
class Student {
    public:
    string name;
    int age;
    int rollNumber;
    string college;

    void markAttendance(){
        cout<<name<< " is present"<<endl;
    }
};

class EngineeringStudent {
    public:
    string name;
    int age;
    int rollNumber;
    string college;

    void markAttendance(){
        cout<<name<< " is present"<<endl;
    }
};

int main(){
    Student *s1 = new Student();

    EngineeringStudent *e1 = new EngineeringStudent();

    s1->name = "Manish";
    s1->age = 21;

    e1->name = "Dinesh";
    e1->age = 19;

    s1->markAttendance();
    e1->markAttendance();

    return 0;
}