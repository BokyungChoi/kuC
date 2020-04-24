#include <stdio.h>

int main()
{
  int a;
  a = 127;

  //printf("a : in %d , %o \n ", 8  , a);
  //printf("a : in %d , %d \n ", 10 , a);
  //printf("a : in %d , %x \n ", 16 , a);
  
  float f = 3.141592f;
  double d = 3.141592; 
  int i = 123;
  printf("f : %.100f \n", f);
  printf("i : %5d \n", i);
  printf("d : %6.3f \n", d);
  
  return 0;
}

