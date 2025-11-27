#include<iostream>
using namespace std;

class Test{
	private:
		int num;
	public:
		void in(){
			cout << "Enter the Number:";
			cin >> num;
		}
		void out(){
			cout << "The Number is:" << num ;
		}
};

int main(){
	Test obj;
	
	obj.in();
	obj.out();
	
	return 0;
}
