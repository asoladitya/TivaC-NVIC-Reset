#include "swap.h"

int *swap(int *x, int *y){
   static int tmp[2];
   tmp [0] = *x;
   tmp[1] = *y;
   *x = tmp[1];
   *y = tmp[0];
   
   return tmp;
}