#include<iostream>

using namespace std;

class BankAccount{

    private:
    int balance;

    public:
    int withdraw(int amount){

        if(amount>balance){
            cout<< "Insufficient Balance"<<endl;
            return -1;
        }

        balance -= amount;
        cout<<"Amount "<< amount<< " is withdrawn"<<endl;

        return amount;
    }

    int deposit(int amount){
        if(amount<0) return -1;
        balance += amount;

        cout<<"Amount "<<amount<<" is deposit"<<endl;

        return 0;
    }

    int getbalance(){
        return balance;
    }
};

int main(){
    BankAccount *b1 = new BankAccount();

    b1->deposit(100);
    b1->deposit(300);

    b1->withdraw(500);

    cout<<"Total Balance is "<<b1->getbalance()<<endl;
}