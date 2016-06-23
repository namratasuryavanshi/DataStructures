// RECURSION 
//Reverse a linked list using recursion

#include <iostream>
using namespace std;

// To execute C++, please define "int main()"
struct Node{
  int data;
  Node* next;
};

Node* head; // head is a global variable .. accesible to all functions

void Reverse(Node* p){
  if(p -> next == NULL){
    head = p;
    return;
  }
  Reverse(p -> next);
  // traversing in the backward direction
 
  Node* q = p -> next;
  q -> next = p;
  p -> next = NULL;
  printf("%d \t", p -> data);  // fix this!!! - not printing the last node in the beginning
}

//Insert function is a pointer variable
Node* Insert(Node* head, int data){
  Node* temp = new Node();
  temp -> data = data;
  temp -> next = NULL;
  
  if(head == NULL) head = temp;
  else{
    Node* temp1 = head;
    while(temp1 -> next != NULL) temp1 = temp1 -> next;
    temp1 -> next = temp;
  }
  return head;   
}

// Print list recursively

void Print(Node* p){  
  // address of head node --- which is p(local variable)
  if(p == NULL){ 
    printf("\n");
    return;
  }
  printf("%d\t", p -> data);
  Print(p -> next);     // recursive call
}

int main(){
  Node* head = NULL; // local variable
  head = Insert(head, 2);
  head = Insert(head, 4);
  head = Insert(head, 6);
  head = Insert(head, 7);
  head = Insert(head, 8);
  Print(head);
  Reverse(head);
}



// OUTPUT

/*
6:17pm - nam ran 65 lines of C++ (finished in 620ms):
2       4       6       7       8 
7       6       4       2 

*/
