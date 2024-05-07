#include <iostream>
using namespace std;

// Reverse a Linked List. 
// class is bydefulat Private. 
class Node{
    public:
        int Value;
        Node* Next;

};

void printLinkedList(Node*n){
    while(n!=NULL){
        cout << n->Value << endl;
        n = n->Next;
    }
}

int main(){

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->Value = 10;
    head->Next = second;

    second->Value = 11;
    second->Next = third;

    third->Value = 14;
    third->Next = NULL;


    printLinkedList(head);

}