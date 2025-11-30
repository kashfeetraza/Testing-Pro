#include<iostream>

using namespace std;

class Array{
	private:
		int arr[5];
	public:
		void fill();
		void display();
		int max();
		int min();
};
	void Array :: fill(){
		for(int i=0; i<5 ; i++){
			cout << "Enter arr[" << i << "]:";
			cin >> arr[i];
		}
	}
	
	void Array :: display(){
		for(int i=0; i<5 ; i++){
			cout << "Enter arr[" << i << "]" << arr[i] << endl;
		}
	}
	
int main(){
	Array array;
	array.fill();
	array.display();
	return 0;
}
	
	
	
	
	
