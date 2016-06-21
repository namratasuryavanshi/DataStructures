// RECURSION 
//Print elements of a linked list in forward and reverse order using RECURSION 

#include <iostream>
using namespace std;

// To execute C++, please define "int main()"
struct Node{
  int data;
  Node* next;
};

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

// Prints reversed list

void ReversePrint(Node* p){
  if(p == NULL){ 
    return;
  }
  ReversePrint(p -> next); 
  printf("%d\t", p -> data);
}

int main(){
  Node* head = NULL; // local variable
  head = Insert(head, 2);
  head = Insert(head, 4);
  head = Insert(head, 6);
  head = Insert(head, 7);
  head = Insert(head, 8);
  Print(head);
  ReversePrint(head);
}

// OUTPUT

/* 

3:32pm - nam ran 60 lines of C++ (finished in 542ms):
2       4       6       7       8 
8       7       6       4       2

*/
