#include <iostream>
using namespace std;
class Node{
  public:
    int data;
    Node* next;
    
    
    Node(int new_data){
        this->data = new_data;
        this->next = nullptr;
    }
};
int main() {
    Node* Head = new Node(10);
    
    Head-> next = new Node(20);
    
    Head-> next -> next = new Node(30);
    
    Head-> next -> next -> next = new Node(40);
    
    while(Head != nullptr){
        cout << Head->data << " ";
        Head = Head->next;
    }    
    
    return 0;
}