#include<stdio.h>  //conditional operator while initializing variable
int main()
{  int x=6,y,z;
 
   y = x = 10;// here both the y  and x are updated with the value 10
   z = x<10; //it represents boolaen value and store bool value in z(0 or 1)
   printf("\n%d %d %d",x,y,z);//boolean cannot be directly printed it can only represented as(0 or 1)(true = 1 or 0 = false)
   return 0;

}