#include<iostream>
using namespace std;

class Rectangle{
	public :
		int length, width;
		
	
		 area(){
			cout<<"Area of rectangle:"<<length*width;
		}
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
