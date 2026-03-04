#include<iostream>
using namespace std;

class customer{
    public:
    string name;
    int balance,age;
};

int main(){
    customer *C1 = new customer();
    // (*C1).name = "Mamta";
    // (*C1).age = 12;
    // (*C1).balance = 840;

    C1->name = "Manish";
    C1->age = 22;
    C1->balance = 8000;
    cout<<C1->name<<" "<<C1->age<<" "<<endl;

    // cout<<(*C1).name<<" "<<(*C1).age<<" "<<endl;

    return 0;
};