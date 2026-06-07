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

int main(){
     // single  inheritance
     EngineeringStudent *es1 = new EngineeringStudent();

     es1->name = "Manish";
     es1->age = 20;

     es1->markAttedance();
     es1->attendentLab();

     return 0;

}