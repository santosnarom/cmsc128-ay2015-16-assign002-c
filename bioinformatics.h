#include<stdio.h>
#include<string.h>

int getHammingDistance(char * str1, char * str2){

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

  for(i = 0; i < strlen(str1); i++){
    if(str1[i] != str2[i]) distance++;
  }

  return distance;

}

int countSubstrPattern(char * original, char * pattern){

  int i = 0, i2 = 0;
  int j = 0;
  int count = 0;

  if(strlen(original) < strlen(pattern)) return 0;

  for(i = 0; i < strlen(original); i++){
    if(original[i] == pattern[0]){
      i2 = i;
      for(j = 0; j < strlen(pattern); j++, i2++){
        if(pattern[j] != original[i2]) break;
      }
      if(j == strlen(pattern)) count++;
    }
  }

  return count;

}

char * isValidString(char * str, char * alphabet){

  int i = 0;
  int j = 0;
  int valid = 0;

  for(i = 0; i < strlen(str); i++){
    for(j = 0; j < strlen(alphabet); j++){
      if(str[i] == alphabet[j]) valid = 1;
    }
  }

  if(valid == 1)
    return "true";
    
  return "false";

}
