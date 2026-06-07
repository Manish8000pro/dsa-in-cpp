#include<iostream>

using namespace std;

class Student {
    public:
    string name;
    int age;

    void markAttedance() {
        cout << name << " is present" << endl;
    }
};

class EngineeringStudent: public Student{
     public:

     void attendentLab(){
          cout<<" Lab attendent by "<<name<<endl;
     }
};

class CSEStudent: public EngineeringStudent {

    void printCode(){
        cout<< name<< " is printing code"<<endl;
    }
};

int main(){
    CSEStudent *cs1 = new CSEStudent();

    cs1->name = "Manish";
    cs1->age = 20;

    cs1->markAttedance();
    cs1->attendentLab();
    cs1->printCode();

    return 0 ;
}