#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age,rollNumber;
};

class customer{
    public:
    string name,bank;
    int age,account_number;
};

int main(){
    Student S1, S2;

    S1.name = "Manish";
    S1.age = 22;
    S1.rollNumber = 7;

    S2.name = "Mamta";
    S2.age = 16;
    S2.rollNumber = 3;

    cout<<S1.name<<" "<<S1.age<<" "<<S1.rollNumber<<" "<<endl;
    cout<<S2.name<<" "<<S2.age<<" "<<S2.rollNumber<<" "<<endl;

    customer C1 ;
    C1.name = "Dinesh";
    C1.age = 20;
    C1.account_number = 29409;
    C1.bank = "SBI";

    cout<<C1.name<<" "<<C1.age<<" "<<C1.account_number<<" "<<C1.bank<<" ";

    return 0;

}