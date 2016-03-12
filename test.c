#include<stdio.h>
#include "bioinformatics.h"

main(){
  int x = getHammingDistance("AACCTT", "GGCCTT");
  printf("\n%i\n", x);
}
