#include <iostream>
using namespace std;

class Book{
	private:
		int BookId, Pages;
		float Price;
	public:
		
		void get(){
			cout << "Enter the BookId:" ;
			cin >> BookId; 
			cout << "Enter the Page:" ;
			cin >> Pages;
			cout << "Enter the Price:" ;
			cin >> Price;
		}
		void set(int bookid, int page, float price){
			BookId = bookid;
			Pages = page;
			Price = price;
		}
		void show(){
			cout << "The BookID is:" << BookId << endl;
			cout << "The Page is:" << Pages << endl;
			cout << "The Price is:" << Price << endl;
		}
		float showprice(){
			return Price;
		}
};

int main(){
	Book b1, b2;
	b1.get();
	b1.show();
	b1.set(1,90,2.2);
//	b1.showprice();

	cout << endl; 
	
	b2.get();
	b2.show();
	b2.set(1,90,2.2);
	
	return 0;
}
		
