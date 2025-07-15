#include "fact.h"

unsigned fact(unsigned n){
  if (n == 0U){
    return 1;
  }
  else{
    return (n*fact(n-1));
  }
}