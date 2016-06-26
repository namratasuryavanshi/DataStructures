
//STACKS - LinkedList implementation of Stacks

#include <iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

Node* top;

void Push(int x){
  Node* temp = new Node();
  temp -> data = x;
  temp -> next = top;
  top = temp;
}

void Pop(){
  Node* temp;
  if(top == NULL) {
    printf("Cannot POP  further \n");
    return;
  }
  temp = top;
  top = top -> next;
  delete(temp);
}

int isEmpty(){
  if(top == NULL){ 
    printf("List is empty \n");
    return 1;
  }
  printf("List is NOT empty \n");
  return 0;
}

void Print(){
  Node* temp = top;
  printf("Stack: ");
  while(temp != NULL){
    printf("%d  ", temp -> data);
    temp = temp -> next;
  }
  printf("\n");
}

int main(){
  top = NULL;
  Push(2); Print();
  Push(4); Print();
  Push(6); Print();
  Push(8); Print();
  Pop(); Print();
  isEmpty();
  Pop(); Print();
  Pop(); Print();
  Pop(); Print();
  Pop(); Print();
  isEmpty();
  Push(10); Print();
  Push(20); Print();
  
}

/*  OUTPUT

1:57am - nam ran 68 lines of C++ (finished in 602ms):
Stack: 2 
Stack: 4  2 
Stack: 6  4  2 
Stack: 8  6  4  2 
Stack: 6  4  2 
List is NOT empty 
Stack: 4  2 
Stack: 2 
Stack: 
Cannot POP  further 
Stack: 
List is empty 
Stack: 10 
Stack: 20  10 

*/

