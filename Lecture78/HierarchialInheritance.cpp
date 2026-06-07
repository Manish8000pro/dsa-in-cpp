#include<iostream>

using namespace std;

class Student {
    public:
    string name;
    int age;


    void markAttendance(){
        cout<<name<<" is present"<<endl;
    } 
};

class EngineeringStudent: public Student{
    public:

    void attendLab(){
        cout<<"Lab attend by the"<<name<<endl;
    }
};

class medicalStudent: public Student{
    public:
    void performeOperation(){
        cout<<name<<" is perform the operation"<<endl;
    }
};

int main(){
    EngineeringStudent *es1 = new EngineeringStudent();
    es1->name = "Manish";
    es1->age = 20;

    medicalStudent *ms1 = new medicalStudent();
    ms1->name = "Naresh";
    ms1->age = 24;

    ms1->markAttendance();
    ms1->performeOperation();
}