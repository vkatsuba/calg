/*
 * Fibonacci number - https://en.wikipedia.org/wiki/Fibonacci_number
 */

#include <stdio.h>

int fib(int n){
  return n <= 1 ? n : fib(n - 1) + fib(n - 2);
};

void main(){
  int fibNum = 0;

  printf("Input the number and get Fibonacci Series : ");

  scanf(" %d", &fibNum);

  for(int i = 0; i < fibNum; i++){
    printf("%d\n", fib(i));
  }  
};