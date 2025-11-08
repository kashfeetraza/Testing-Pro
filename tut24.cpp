#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;
    public:
    void setdata(){
        cout<<"Enter the id "<<endl;
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
    }
    static void getcount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};

int employee::count;

int main(){
    employee ali,afroz,cash;

    ali.setdata();
    ali.getdata();
    employee::getcount();

    afroz.setdata();
    afroz.getdata();
    employee::getcount();

    cash.setdata();
    cash.getdata();
    employee::getcount();

    return 0;
}