#include <iostream>
 using namespace std;
 class student{
    private:
    string name;
    int age;
    public:
    void input();
    void output();

 };
 void student:: input(){
    cout <<"enter your name:"<<endl;
    cin >>name;
    cout <<"enter your age:"<<endl;
    cin>> age;
 }
 void student:: output(){
    cout <<"name is:"<<name<<endl;
    cout <<"age is:"<<age<<endl;
 }
 int main(){
    student s1,s2;
    s1.input();
    s1.output();
    s2.input();
    s2.output();
    return 0;
 }