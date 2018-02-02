#include<stdio.h>
#include<stdlib.h>

void double_arg(int* a){
  *a = *a*2;
}

int main(void){
  int a = 5;
  double_arg(a);
  printf("%i", a);
  return 0;
}
