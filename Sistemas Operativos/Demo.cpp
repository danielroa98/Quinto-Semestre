#include <stdio.h>

int d=5;

int function(int a, int b){

  int c = a + b;
  //move into rax the value of c
  return c;
}

  int main() {
    int b = 6;
    //call function (b,d); int = function(b,d)
    int g = function(b,d);//the contents of rax
    //move into rax 0

    return 0;

}
