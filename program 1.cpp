#include<iostream>
using namespace std;



class Rectangle{
	public :
		int length, width;
		
		int area();
		void input(int l,int w){
			length = l;
			width= w;
		
		}
		
};
int Rectangle:: area(){
			cout<<"Area of rectangle:"<<length*width;
		}
int main(){
	Rectangle r;
	r.input(4,5);
	r.area();
}
