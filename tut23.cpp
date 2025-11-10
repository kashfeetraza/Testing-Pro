#include<iostream>
using namespace std;

class dukaan
{
    // public:
int itemid[50];
int itemprice[50];
int counter;
public:
void initcounter(void){counter=0;}
void setprice(void);
void displayprice(void);
};
 
void dukaan ::setprice(void){
     cout<<"Enter id of your item no."<<counter+1<<endl;
     cin>>itemid[counter];
     cout<<"Enter price of your item:"<<endl;
     cin>>itemprice[counter];
     counter++;
}
void dukaan ::displayprice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
    
}
int main(){
    dukaan shop;
    shop.initcounter();
    shop.setprice();
    shop.setprice();
    shop.setprice();
    shop.displayprice();
    return 0;
}