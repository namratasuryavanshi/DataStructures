
//STACKS - Array implementation of Stacks

#include <iostream>
using namespace std;

#define MAX_SIZE 101

class Stack{
  private:
    int A[MAX_SIZE];    // Array
    int top;            // top index
  
  public:
  
    Stack(){
      top = -1;      // empty array
    }
  
    void Push(int x){
      if(top == MAX_SIZE - 1){
        printf("Error: stack overflow \n");
        return;
      }
      top++;
      A[top] = x;
    }
  
    void Pop(){
      if(top == -1){
        printf("Error: Stack is empty");
        return;
      }
      top--;
    }
  
    int Top(){
      return A[top];
    }
  
    int isEmpty(){
      if(top == -1) return 1;
      return 0;
    }
  
    void Print(){
      printf("Stack: ");
      for(int i = 0; i <= top; i++){
        printf("%d  ", A[i]);
      }
      printf("\n");
    }
};

int main() {
  Stack S;
  S.Push(2); S.Print();
  S.Push(4); S.Print();
  S.Push(6); S.Print();
  S.Pop(); S.Print();
  S.Push(8); S.Print();  
}


/* OUTPUT

11:46pm - nam ran 63 lines of C++ (finished in 662ms):
Stack: 2 
Stack: 2  4 
Stack: 2  4  6 
Stack: 2  4 
Stack: 2  4  8 

*/
