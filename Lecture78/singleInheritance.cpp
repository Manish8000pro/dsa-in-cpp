#include<iostream>

using namespace std;

class Student {
     public:
     string n;
     int a;

     void markAttendance(){
        cout<<n<< " is present"<<endl;
    }

};

class EngineeringStudent: public Student{
     public:
     string n;
     int a;

     void attendentLab(){
          cout<<" Lab attendent by "<<n<<endl;
     }
};

int main(){
     // single  inheritance
     EngineeringStudent *es1 = new EngineeringStudent();

     es1->n = "Manish";
     es1->a = 20;

     es1->markAttendance();
     es1->attendentLab();

     return 0;

}