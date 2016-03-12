//Bioinformatics Library
//Author: Narom P. Santos

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

  //iterate for each char in str1 and check if it is equal to char in str2
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

  //iterate each char in original
  for(i = 0; i < strlen(original); i++){
    //if the start of the pattern is equla to current char
    if(original[i] == pattern[0]){
      i2 = i;
      //check if the pattern exists starting form current char
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
  int valid = 0, count = 0;

  //count all occurences of each char in the alphabet
  for(i = 0; i < strlen(str); i++){
    for(j = 0; j < strlen(alphabet); j++){
      if(str[i] == alphabet[j]){
        valid = 1;
        count++;
      }
    }
    if(count > 1)
      return "Alphabet not unique";
    count = 0;
  }

  if(valid == 1)
    return "true";

  return "false";

}

int getSkew(char * str, int n){

  int G = 0;
  int C = 0;
  int i = 0;

  if(strlen(str) <= 0){
    printf("\nError: Invalid string\n");
    return -1;
  }

  if(strlen(str) < n){
    printf("\nError: Index out of bounds\n");
    return -1;
  }

  //Count all Gs and Cs in the string
  for(i = 0; i < n; i++){
    if(str[i] == 'G') G++;
    if(str[i] == 'C') C++;
  }

  return G-C;

}

int getMaxSkewN(char * str, int n){

  int i = 0;
  int max = 0;

  if(strlen(str) <= 0){
    printf("\nError: Invalid string\n");
    return -1;
  }

  if(strlen(str) < n || n <= 0){
    printf("\nError: Index out of bounds\n");
    return -1;
  }

  //Get the skew of 0 to N
  for(i = 0; i < n; i++){
    //Save only the max skew
    if(max < getSkew(str,i + 1))
      max = getSkew(str,i + 1);
  }

  return max;

}

int getMinSkewN(char * str, int n){

  int i = 0;
  int min = getSkew(str, 1);

  if(strlen(str) <= 0){
    printf("\nError: Invalid string\n");
    return -1;
  }

  if(strlen(str) < n || n <= 0){
    printf("\nError: Index out of bounds\n");
    return -1;
  }

  //Get the skew of 0 to N
  for(i = 0; i < n; i++){
    //Save only the min skew
    if(min > getSkew(str,i + 1))
      min = getSkew(str,i + 1);
  }

  return min;

}
