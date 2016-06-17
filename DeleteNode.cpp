#include <iostream>
using namespace std;

// To execute C++, please define "int main()"
struct Node{
  int data;
  Node* next;
};

Node* head;

void Insert(int data, int n){
  Node* temp1 = new Node();
  temp1 -> data = data;
  temp1 -> next = NULL;
  
  if(n==1){
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
  int numberOfNodes = 0;
  Node* temp = head;
  while(temp != NULL){
    cout << temp -> data << "\t";
    numberOfNodes++;
    temp = temp -> next;
  }
  cout << "Nodes = " << numberOfNodes << "\n";
}
void Delete(int n){
  Node* temp1 = head;
  
  // if deleting the first node
  if(n == 1){
    head = temp1 -> next; // head points to second node
    delete temp1; // deleting temp1 node
    return;   
  }
  // if deleting the nth node
  for(int i = 0; i < n-2; i++){
    //if(n > )
    temp1 = temp1 -> next;
  }
  Node* temp2 = temp1 -> next;  // create a temp2 node to point to next node - nth node
  temp1 -> next = temp2 -> next; // n+1 th node
  delete temp2;
  
}

int main(){
  head = NULL;
  
  Insert(2, 1);
  Insert(4, 2);
  Insert(6, 3);
  Insert(8, 4);
  Insert(9, 5);
  Print();
  
  Delete(3);
  Print();
  
}


// OUTPUT

/*
4:19am - nam ran 73 lines of C++ (finished in 790ms):
2       4       6       8       9       Nodes = 5 
2       4       8       9       Nodes = 4 
*/
