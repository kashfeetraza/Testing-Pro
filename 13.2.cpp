#include<iostream>
using namespace std;

class Marks{
	private:
		int a, b, c;
	public:
		void in(){
			cout << "Enter the Number:" << endl;
			cin>> a >> b >> c;
		}
		
		int Sum(){
			return a+b+c;
		}
		
		float avg(){
			return (a+b+c)/3;
		}
};

int main(){
	Marks m;
	
	m.in();
	cout<< "The Sum of these number is:" << m.Sum() << endl;
	cout<< "The Average of these number is:" << m.avg() << endl;
	
	return 0;
}
