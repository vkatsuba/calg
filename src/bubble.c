/*
 * Bubble sort - https://en.wikipedia.org/wiki/Bubble_sort
 */

#include <stdio.h>

void main(){
  int array[] = {3, 5, 4, 6, 2, 8, 1, 9, 7};
  int arrayLength = sizeof(array) / sizeof(int);

  for(int n = 0; n < arrayLength; n++){
    for(int i = 0; i < arrayLength; i++){
      int priv = array[i];
      int next = array[i + 1];

      if(priv > next){
        array[i] = next;
        array[i + 1] = priv;
      }
    }
  }

  for(int x = 0; x < arrayLength; x++){
    printf("%d ", array[x]);
  }

  printf("\n");
}