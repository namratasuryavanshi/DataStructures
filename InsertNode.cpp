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
  Node* temp = head;
  while(temp != NULL){
    cout << temp -> data << "\t";
    temp = temp -> next;
  }
  cout << "\n";
}


int main() {
  head = NULL; //empty list
  Insert(2, 1);
  Insert(4, 2);
  Insert(6, 3);
  Insert(8, 4);
  Print();
  
  Insert(10, 3);
  Print();
  
}




// OUTPUT

/*
2	4	6	8	
2	4	10  6	8

*/
