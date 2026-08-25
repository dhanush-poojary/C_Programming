#include<stdio.h>  //The Actual Thing
int main()
{  int x=15,y=10;

  //we can ignore if statement by using ';'
  
  if(x==y);//it is ended here only
     printf("X and Y are equal");//this will not come under if 
  //else //without writting if we cannot write else
     printf("\nX and Y are not equal!");//this will not come under else bcz there is no else
  return 0;
}