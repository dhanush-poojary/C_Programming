#include<stdio.h>                        //excerxcise code
int main()
{  //bodmas
    float x = 2 / 3.00 * 3.00;
   float y = 3 / 2.00 * 2.00;
   /*here the division will take place first because of left to right approch and later multiplucation and at end addition and substraction takes place*/
   printf("%.1f",x);
   //here .1f used bcz after integer only one floating point will be printed eg:(%int.0)
   printf("\n%.1f",y);
   
}