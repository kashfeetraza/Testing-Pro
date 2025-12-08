
// for runtime 
#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    void in(){
        cout <<" enter your name and age";
        cin >> name>> age;
    }
    void out(){
        cout << "name="<<name<<endl;
        cout <<"age"<<age<<endl;
    }
};
main(){
    student s1;
    s1.in();
    s1.out();
    return 0;
}
