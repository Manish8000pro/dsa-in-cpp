#include<iostream>

using namespace std;

class BankAccount{

    public:
    int balance;

    int withdraw(int amount){
        if(amount<=balance){
            balance -= amount;
        }
        cout<<"Amount "<< amount<< " is withdrawn"<<endl;

        return amount;
    }

    int deposit(int amount){
        if(amount<0) return -1;
        balance += amount;

        cout<<"Amount "<<amount<<" is deposit"<<endl;

        return 0;
    }
};

int main(){
    BankAccount *b1 = new BankAccount();

    b1->deposit(100);
    b1->deposit(300);

    b1->withdraw(200);

    cout<<"Total Balance is " << b1->balance<<endl;
}