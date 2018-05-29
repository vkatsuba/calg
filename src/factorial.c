/*
 * Factorial- https://en.wikipedia.org/wiki/Factorial
 */

#include <stdio.h>

double factorial(int n) {
  return n != 1 ? n * factorial(n - 1) : 1;
}

void main(){
  int num = 100;
  double res = 1;

  for(int i = 1; i <= num; i++){
    res *= i; 
  }

  printf("Cycle 'for': Factorial of %d is:\n%.0f\n\n", num, res);
  printf("Recursive 'function': Factorial of %d is:\n%.0f\n", num, factorial(num));
}