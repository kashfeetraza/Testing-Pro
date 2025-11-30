#include <iostream>
using namespace std;

class Result{
	private:
	int rno, subjectmark[3];
	string name;
	public:
		void input(){
			cout << "Enter Your Roll No:";
			cin >> rno;
			cout << "Enter Your Name:";
			cin >> name;
			for(int i=0; i < 3;i++){
				cout << "Enter Subject:"; 
				cin >> subjectmark[i];
			}
		}
		
		void show(){
			cout << "RollNo:" << rno <<endl;
			cout << "Name:" << name <<endl;
			for(int i=0;i<3;i++){
				 cout<< "[" <<i<< "]" << subjectmark[i] << endl;
			}
		}
		
		void total(){
			int t = 0;
			for(int i=0;i<3;i++){
				t += subjectmark[i];
			}
			cout <<"The Total N0 is:" << t;
		}
		
		void avg(){
			int t = 0;
			for(int i=0;i<3;i++){
				t += subjectmark[i];
			}
			cout << "The average is:" << t/3.0;
		}
};

int main(){
	Result r, r1;
	r.input();
	cout << endl;
	r.show();
	cout << endl;
	r.total();
	cout << endl;
	r.avg();
	cout << endl;
	
	cout << endl;
	r1.input();
	cout << endl;
	r1.show();
	cout << endl;
	r1.total();
	cout << endl;
	r1.avg();
	cout << endl;
	
	return 0;
}
