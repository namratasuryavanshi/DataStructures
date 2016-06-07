#include <iostream>
using namespace std;

// To execute C++, please define "int main()"
struct Node{
  int data;
  Node* link;
};

Node* head;

void Insert(int x){
  Node* temp = new Node();
  temp -> data = x;
  
  if(head != NULL){
    temp -> link = head;
  }
  else temp -> link = NULL;
  
  head = temp; 
}


void Print(){
  Node* temp = head;
  printf("List is: ");
  while (temp != NULL ){
    printf("%d",temp->data);
    temp = temp -> link;
  }
  printf("\n");
}

int main() {
  head = NULL; // list is empty
  printf("Number of nodes?");
  int n,x;
  scanf("%d",&n);
  
  for(int i = 0; i < n; i++){
    printf("Enter the number: ");
    scanf("%d",&x);
    Insert(x);
    Print();
  }
}
