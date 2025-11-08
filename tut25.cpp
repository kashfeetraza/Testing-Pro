#include<iostream>
using namespace std;

class bscs
{
    int roll;
    int section;
    public:
     void setid(void){
        cout<<"Enter The roll no. of student :"<<endl;
        cin>>roll;
     }
     void getid(void){
        cout<<"The id of this student is"<<roll;

     }
};
int main(){
    bscs b[5];
    for (int i = 0; i < 5; i++)
    {
        b[i].setid();
        b[i].getid();
    }
    
    
    return 0;
}