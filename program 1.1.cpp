#include<iostream>
using namespace std;

int Rectangle:: area(){
			cout<<"Area of rectangle:"<<length*width;
		}

class Rectangle{
	public :
		int length, width;
		
		int area();
		void input(int l,int w){
			length = l;
			width= w;
		
		}
		
};

int main(){
	Rectangle r;
	r.input(4,5);
	r.area();
}
