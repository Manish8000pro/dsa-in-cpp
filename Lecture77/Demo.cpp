#include<iostream>

using namespace std;

// class and object

class student{

    public:
    string name;
    int age;
    int rollnumber;
    string college;

    student(string n, int a, int rn,string c){
        name = n;
        age = a;
        rollnumber = rn;
        college = c;
    }
};

int main(){

    // stack & Heap
    student s1("Manish",20,8,"IIT Guhawati");
    // s1.name = "Manish";
    // s1.age = 20;
    // s1.rollnumber = 7;
    // s1.college = "IIT Guhawati";

    cout<<s1.name<<" "<<s1.age<<" "<<s1.rollnumber<<" "<<s1.college<<" ";

    return 0;
}