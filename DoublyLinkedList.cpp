// Implementation of doubly linked list

#include <iostream>

using namespace std;

struct Node{
  int data;
  Node* prev;
  Node* next;
};

Node* head;

// creating a new node for insertion in the list
Node* getNewNode(int x){
// creating a node at heap section of the memory
  Node* newNode = new Node();
  newNode -> data = x;
  newNode -> prev = NULL;
  newNode -> next = NULL; 
  return newNode;
}

void InsertAthead(int x){  
  Node* newNode = getNewNode(x);
  if(head == NULL){ // if list is empty
    head = newNode;
    return;
  }
  head -> prev = newNode;
  newNode -> next = head;
  head = newNode;
  
}

void InsertAtTail(int x){
  Node* temp1 = head;
  Node* newNode = getNewNode(x);
  if(head == NULL){
    head = newNode;
    return;
  }
  while (temp1->next != NULL) temp1 = temp1 ->next;
  temp1 -> next = newNode;
  newNode -> prev = temp1;

}

void Print(){
  Node* temp = head;
  printf("Forward List: ");
  while(temp != NULL){
    printf("%d  ", temp->data);
    temp = temp-> next;
  }
  printf("\n");
}

void ReversePrint(){
  Node* temp = head;
  if(temp == NULL) return; // list is empty
  while(temp -> next != NULL) temp = temp-> next;
  printf("Reverse List: ");
  while(temp != NULL){
    printf("%d  ", temp-> data);
    temp = temp -> prev;
  }
  printf("\n");
}

int main(){
  head = NULL;
  InsertAthead(2);
  InsertAthead(4);
  InsertAthead(6);
  Print();
  InsertAtTail(7);
  InsertAtTail(8);
  InsertAtTail(9);
  Print();
  ReversePrint();
}


//OUTPUT

/*
5:11pm - nam ran 84 lines of C++ (finished in 548ms):
Forward List: 6  4  2 
Forward List: 6  4  2  7  8  9 
Reverse List: 9  8  7  2  4  6 

*/
