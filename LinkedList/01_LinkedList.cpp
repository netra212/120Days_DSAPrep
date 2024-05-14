#include <iostream>
using namespace std;

// By default class member are private. 
class Node{
    public:
    int data;
    Node *next;

    // constructor, In order to initialized value. 
    Node(int value){
        data = value;
        next = NULL;
    }
};

// Creating an LinkedList with Recursion. 
// During the recursive call, stack is used. 
// Space complexity: constant. 
Node* createLinkedList(int arr[], int index, int arrsize){
    if(index == arrsize){
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->next = createLinkedList(arr, index+1, arrsize);
    return temp;
}

// Inserting Node at the begining of the LinkedList using Recursion.  
Node* createLinkedListInsertAtBegin(int arr[], int index, int arrsize, Node *previousAddress){
    if(index == arrsize){
        return NULL;
    }
    Node *temp = new Node(arr[index]);
    temp->next = previousAddress;
    return createLinkedListInsertAtBegin(arr, index+1, arrsize, previousAddress);
}

int main(){

    Node *head = NULL; // Dynamically creating an Object for the LinkedList. 
    // head -> data = 4;
    // head -> next = NULL;

    int arr[] = {2,3,4,5,6,7};

    for(int i = 0; i < 6; i++){
        // Insert the Node at the begining
        // Check either if LinkedList does not exist.  
        if(head == NULL){
            head = new Node(arr[i]);
        }
        // LinkedList does exist. 
        else{
            Node *temp = new Node(arr[i]);
            temp -> next = head;
            head = temp;
        }
    }

    // Traversal through the single LinkedList. 
    Node *temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }

    // Inserting an element at the end of the LinkedList. 
    Node *head = NULL;
    Node *tail = NULL;
    // Converting an arrays into an LinkedList. 
    for(int i = 0; i < 6; i++){
        // If head does not exist. 
        if(head == NULL){
            head = new Node(arr[i]);
            tail = head;
        }
        else{
            tail -> next = new Node(arr[i]);
            tail = tail -> next;
        }
    }
    Node *temp = head;
    while(temp!=NULL){
        cout << temp -> data << endl;
        temp = temp -> next;
    }

    // Calling an function of creating an LinkedList with recursion. 
    head = createLinkedList(arr, 0, 6);

    //Insertion at the particular Position on LinkedList.
    int x = 3;
    int value = 30;
    Node *temp1 = head;
    x--;
    while(x--){
        temp = temp -> next;
    };
    Node *temp2 = new Node(30);
    temp2 -> next = temp1 -> next;
    temp1 -> next = temp2;

}