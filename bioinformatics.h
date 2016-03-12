#include<stdio.h>
#include<string.h>

int getHammingDistance(char * str1, char * str2){

  int length = strlen(str1);
  int i = 0;
  int distance = 0;

  if(strlen(str1) <= 0 || strlen(str2) <= 0){
    printf("\nError: Invalid string length\n");
    return -1;
  }
  if(strlen(str1) != strlen(str2)){
    printf("\nError: Strings are not equal\n");
    return -1;
  }

  for(i = 0; i < length; i++){
    if(str1[i] != str2[i]) distance++;
  }

  return distance;

}
