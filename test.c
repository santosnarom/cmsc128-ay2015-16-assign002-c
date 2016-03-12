#include<stdio.h>
#include "bioinformatics.h"

main(){
  int x = getMaxSkewN("GGCCAC", 5);
  printf("\n%i\n", x);
}
