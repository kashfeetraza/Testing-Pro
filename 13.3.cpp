#include <iostream>
using namespace std;

class circle{
	private:
		float radius;
	public:
		void get_radius(float r){
			
			radius = r;
		}
		
		void area(){
			cout << "The area of Radius is :"<< 3.14 * radius * radius << endl;
		}
		void circum(){
			cout << "The circumstence of circle is :" << 2 * 3.14 * radius;
		}
};

int main(){
	circle c;
	
	float rad;
	cout << "Enter the Radius:" << endl;
	cin >> rad;
	
	c.get_radius(rad);
	c.area();
	c.circum();
	return 0;
}
