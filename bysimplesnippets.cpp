#include<iostream>
using namespace std;

class Node{
    public:
        int key;
        int data;
        Node* next;

        Node(){
            key = 0;
            data = 0;
            next = NULL;
        }

        Node(int k, int d){
            key = k;
            data = d;
        }
};

class Singlylinklist{
    public:
        Node* Head;

    Singlylinklist(){
        Head = NULL;
    }

    Singlylinklist(Node *n){
        Head = n;
    }
    //1. Checking the node is exist or not by using key value

    Node* nodeExists(int k){
        Node* temp = NULL;

        Node* ptr = Head;

        while (ptr!=NULL)
        {
            if(ptr->key==k){
                temp = ptr;
            }
            ptr = ptr->next;
        }
        return temp;
    }

    //2. Append the Node at the end position

    void appendNode(Node *n){
        if (nodeExists(n->key!=NULL))
        {
            cout << "This Node is Already exists with key value: " << n->key << " Append another node with different key value.";
        }else{
            if (Head == NULL)
            {
                Head = n;
                cout << "Node Append.";
            }else{
                Node* ptr = Head;
                while (ptr->next!=NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = n;
                cout << "Node Append.";
            }
            
        }
    }


    //3. Prepend node at the start position
    void prependNode(Node* n){
    if (nodeExists(n->key!=NULL))
        {
            cout << "This Node is Already exists with key value: " << n->key << " Append another node with different key value.";
        }else{
            n->next = Head;
            Head = n;
            cout << "Node Prepended.";
        }
    }


    //4. Inserting Node after a particular node in the list
    void insertNode(int k,Node *n){
        Node* ptr = nodeExists(k);
        if (ptr==NULL)
        {
            cout << "No Node exist with the key value:" << k << endl;
        }
        else{
            if (nodeExists(n-k!=NULL))
            {
                cout << "The Key value is exist:" << endl;
            }
            else{
                n->next = ptr->next;
                ptr->next = n;
                cout << "Node Inserted" << endl;
            }
        }
        
    }

    //5. Deleting Node from linklist
    void DeleteNode(int k){
        if (Head == NULL)
        {
            cout << "Singly linklist is already empty" << endl;
        }else if(Head!=NULL){
            if (Head->key == k)
            {
                Head == Head->next;
                cout << "Unllike with key value" << endl;
            }
            else{
                Node* temp = NULL;
                Node* preNodeptr = Head;
                Node* currentNodeptr = Head->next;
                while (currentNodeptr!=NULL)
                {
                    if (currentNodeptr->key==k)
                    {
                        temp = currentNodeptr;
                        currentNodeptr = NULL;
                    }else{
                        preNodeptr = preNodeptr->next;
                        currentNodeptr = currentNodeptr->next;
                    }
                }
                if (temp!=NULL)
                {
                    preNodeptr->next = temp->next;
                    cout << "Node Unlinked with key value" << endl;
                }else{
                    cout << "Doesnot exist with key value" << endl;
                }
            }
        }
        
    }

    //6. 44.56min
};

int main(){

    return 0;
}