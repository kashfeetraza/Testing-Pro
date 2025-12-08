#include <iostream>
using namespace std;
class student{
    public:
    string name;
    string id;
    int age;
    int rolno;
    void display(){
        cout <<"name:="<<name<<endl;
        cout <<"id="<<id<<"\n";
        cout <<"age="<<age<<endl;

    }
};
main(){
    student s1;
    s1.name= "muzammil";
    s1.id="cosule";
    s1.age= 19;
    s1.rolno=22;
    s1.display();
    return 0;
}