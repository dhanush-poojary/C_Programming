#include<stdio.h>
int main()
{  int a = 6;
   float b = 6.0;
  //here the c compiler will take both as same values 
   if(a == b)
      printf("\nTrue");
   else
     printf("false");
  return 0;
}