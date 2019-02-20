/*
 * Linear search - https://en.wikipedia.org/wiki/Linear_search
 */

#include <stdio.h>

int search(int arr[], int len, int x) {
  for(int i = 0; i < len; i++)
    if (arr[i] == x) return i;
  return -1;
}

void main(){
 int arr[] = {3, 5, 4, 6, 2, 8, 1, 9, 7, 22};
 int res = search(arr, sizeof(arr), 1);
 res == -1 ? printf("Index Not Found") : printf("Index: %d\n", res);
}
