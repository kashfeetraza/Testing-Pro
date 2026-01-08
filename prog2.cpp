#include<iostream>
using namespace std;
string name,Class,Sem,sec;
int Roll,obt,s1,s2,s3,s4,s5,s6,total=600;
float average;

class student{
    public:
        student(){
            cout<<"ENTER THE NAME:"<<endl;
            cin>>name;
            cout<<"ENTER THE ROLL#:"<<endl;
            cin>>Roll;
            cout<<"ENTER THE CLASS"<<endl;
            cin>>Class;
            cout<<"ENTER THE SEMESTER:"<<endl;
            cin>>Sem;
            cout<<"ENTER THE SECTION:"<<endl;
            cin>>sec;
            cout<<"ENTER THE SUB1:"<<endl;
            cin>>s1;
            cout<<"ENTER THE SUB2:"<<endl;
            cin>>s2;
            cout<<"ENTER THE SUB3:"<<endl;
            cin>>s3;
            cout<<"ENTER THE SUB4:"<<endl;
            cin>>s4;
            cout<<"ENTER THE SUB5:"<<endl;
            cin>>s5;
            cout<<"ENTER THE SUB6:"<<endl;
            cin>>s6;
            int obt_mark = s1+s2+s3+s4+s5+s6;
            cout<<"OBTAINED MARKS:"<<obt_mark<<endl;
            cout<<"TOTAL MARKS:"<<total<<endl;
        }

};




int main(){
	student stu1;
	cout<<"================"<<endl;
	return 0;
}
