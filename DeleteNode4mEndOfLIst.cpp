#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

Node* head;

void Insert(int data, int n){
  Node* temp1 = new Node();
  temp1 -> data = data;
  temp1 -> next = NULL;
  
  if(n == 1){
    temp1 -> next = head;
    head = temp1;
    return;
  }
  Node* temp2 = head;
  for(int i = 0; i < n-2; i++){
    temp2 = temp2 -> next;
  }
  temp1 -> next = temp2 -> next;
  temp2 -> next = temp1;
}

void Print(){
  Node* temp = head;
  while(temp -> next != NULL){
    cout << temp -> data << "\t";
    temp = temp -> next;
  }
  cout << "\n";
}

void Delete(int n){
  Node * temp1 = head;
  if(n == 1){
    head = temp1 -> next;
    delete temp1;
    return;
  }  
  for(int i = 0; i < n-2; i++){ // at n-1th place
    temp1 = temp1 -> next;
  }
  Node* temp2 = temp1 -> next; // at nth place
  temp1 -> next = temp2 -> next;
  delete temp2;
}

void DeleteFromEnd(int k){
  int nodes = 0;
  Node* temp = head;
  while(temp != NULL){
    nodes++;
    temp = temp -> next;
    //nodes++;
  }
  cout << "Number of nodes: " << nodes << "\n";
  int DelNode = nodes - k;
  
  Delete(DelNode);
  
}

int main(){
  head = NULL;
  Insert(2, 1);
  Insert(3, 2);
  Insert(4, 3);  
  Insert(6, 4);
  Insert(7, 5);
  cout << "LinkedList" << "\n";
  Print();
  
  Insert(5, 4);
  cout << "Inserting 5 at Node 4" << "\n";
  Print();
  
  //Delete(2);
  //Print();
  
  DeleteFromEnd(3);
  cout << "Deleting 2nd last node" << "\n";
  Print();
}

//OUTPUT

/*
LinkedList 
2       3       4       6 
Inserting 5 at Node 4 
2       3       4       5       6 
Number of nodes: 6 
Deleting 3rd last node 
2       3       5       6 
*/

