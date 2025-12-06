#include <iostream>
using namespace std;
void traficSignal(string signal){
    if(signal== "red"){
        cout <<"messsage :   stop"<<endl;

    }else if(signal== "green"){
     cout << "measseage:   slow ";
    }else if(signal == "yello"){
        cout <<" message :"<<" run"<<endl;
    }else{
        cout <<"inalid color";
    }
}int main(){
    string signal;
    cout <<" enter you signal color"<<endl;
    cin >> signal;
    traficSignal(signal);
    return 0;
}