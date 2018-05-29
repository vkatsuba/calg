/*
 * ROT13 - https://en.wikipedia.org/wiki/ROT13
 */

#include <stdio.h>
#include <ctype.h>

char * ro13(char data[], int dataSize){
  char firstHalf[] =  "abcdefghijklm";
  char secondHalf[] = "nopqrstuvwxyz";
  int haltSize = 13;

  for(int i = 0; i < haltSize; i++){
    for(int j = 0; j < dataSize; j++){
      int isEqualFirst = 0;
      int isEqualsecond = 0;
      int isUpper = isupper(data[j]);

      if(isUpper){
        isEqualFirst = data[j] == toupper(firstHalf[i]);
        isEqualsecond = data[j] == toupper(secondHalf[i]);
      } else{
        isEqualFirst = data[j] == firstHalf[i];
        isEqualsecond = data[j] == secondHalf[i];
      }

      if(isEqualFirst){
        data[j] = isUpper ? toupper(secondHalf[i]) : secondHalf[i];
 
      } else if(isEqualsecond){
        data[j] = isUpper ? toupper(firstHalf[i]) : firstHalf[i];
      }
    }
    
  }

  return data;
}

void main() {
  char firstHalf[] =  "abcdefghijklm";
  char secondHalf[] = "nopqrstuvwxyz";
  int haltSize = 13;
  char data[] = "Hello Worlds";

  for(int i = 0; i < haltSize; i++){
    for(int j = 0; j < sizeof(data); j++){
      int isEqualFirst = 0;
      int isEqualsecond = 0;
      int isUpper = isupper(data[j]);

      if(isUpper){
        isEqualFirst = data[j] == toupper(firstHalf[i]);
        isEqualsecond = data[j] == toupper(secondHalf[i]);
      } else{
        isEqualFirst = data[j] == firstHalf[i];
        isEqualsecond = data[j] == secondHalf[i];
      }

      if(isEqualFirst){
        data[j] = isUpper ? toupper(secondHalf[i]) : secondHalf[i];
      } else if(isEqualsecond){
        data[j] = isUpper ? toupper(firstHalf[i]) : firstHalf[i];   
      }
    }
  }

  printf("Cycle 'for' : %s\n\n", data);

  // Call function 'ro13'
  char dataROT13[] = "Hello Worlds";

  char * encRot13 = ro13(dataROT13, sizeof(dataROT13));
  printf("Function call 'ro13' - Encode : %s \n\n", encRot13);

  char * decRot13 = ro13(encRot13, sizeof(dataROT13));
  printf("Function call 'ro13' - Decode : %s \n\n", decRot13);
}