#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
using std::strlen;

// To execute C++, please define "int main()"
void Reverse(char *C){
  stack<char> S;
  
  for(unsigned int i = 0; i<strlen(C); i++){
    S.push(C[i]);
  }
  for(unsigned int i = 0; i<strlen(C); i++){
    C[i] = S.top();
    S.pop();
    
  }
}

int main() {
  char string[] = "HELLO";
  Reverse(string);
  printf("%s", string);
  
}


/*
1:28am - nam ran 27 lines of C++ (finished in 889ms):
OLLEH 


*/
