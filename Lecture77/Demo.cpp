#include<iostream>

using namespace std;

// class and object

class student{

    public:
    string name;
    int age;
    int rollnumber;
    string college;

    student(string n, int a, int rn,string c){ // Parameterized constructer
        name = n;
        age = a;
        rollnumber = rn;
        college = c;
    }

    student(){ // default constructer
        // empty body
    }

    // Behaviours an object --> functions -->methods
    void markAttendance(){
        cout<<name<<" is present "<<endl;
    }

    void print(){
        cout<<name<<" "<<age<<" "<<rollnumber<<" "<<college<<" "<<endl;
    }
};

int main(){

    // stack 
    student s1("Manish",20,8,"IIT Guhawati");
    // s1.name = "Manish";
    // s1.age = 20;
    // s1.rollnumber = 7;
    // s1.college = "IIT Guhawati";

    s1.print();

    s1.markAttendance();

    // cout<<s1.name<<" "<<s1.age<<" "<<s1.rollnumber<<" "<<s1.college<<" ";

    // Heap

    student *s2 = new student("Rohit", 26, 102, "IIT G");

    cout<<s2->name<<" "<<s2->age<<" "<<s2->rollnumber<<" "<<s2->college<<" ";

    return 0;
}