#include<iostream>

using namespace std;

class student{

    public: // Access modifier
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

    student(){ 
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

}