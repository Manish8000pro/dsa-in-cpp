#include<iostream>

using namespace std;

 
class Student {
    public:
    string name;
    int age;
    int rollNumber;
    string college;

     public:
    Student() {}
    
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void markAttendance(){
        cout<<name<< " is present"<<endl;
    }
};

class EngineeringStudent: public Student {
   public:
   EngineeringStudent(string n, int a){
        name = n;
        age = a;
   }

   void fun(){
        cout<<name<< " "<< age << endl;
   }
};

// DRY - Do not repeat youself

int main(){
    Student *s1 = new Student();

    EngineeringStudent *e1 = new EngineeringStudent();

    // s1->name = "Manish";
    // s1->age = 21;

    // e1->name = "Dinesh";
    // e1->age = 19;

    // s1->markAttendance();
    // e1->markAttendance();
    e1->fun();

    return 0;
}