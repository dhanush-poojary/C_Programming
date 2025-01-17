#include<stdio.h>                //to find out a leap year
int main() //leap year consists 366 day or comes between 4 years 
{  int x ;
   printf("Enter a year: ");
   scanf("\n%d",&x);
  //here it checkes the input that can be devided by 4 
   if(x % 4 == 0){ // 4 is used bcz of it comes every 4 year 
    printf("%d is a leap year!",x);
   }
   else{ //only if it is not then else condition will run
     printf("%d is not a leap year",x);
   }
   return 0;
}