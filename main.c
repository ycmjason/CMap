#include <stdio.h>
#include "map.h"

int add1(int n){
  return n+1;
}

int printint(int n){
  printf("%d\n", n);
  return n;
}

int main(){
  int a[5] = {0, 1, 2, 3, 4};

  map(add1, a, 5);
  map(printint, a, 5); // output 1 2 3 4 5

  return 0;
}
