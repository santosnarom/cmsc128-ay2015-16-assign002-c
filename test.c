#include<stdio.h>
#include "bioinformatics.h"

main(){
  int x = countSubstrPattern("AATATATAGG", "GG");
  printf("\n%i\n", x);
}
