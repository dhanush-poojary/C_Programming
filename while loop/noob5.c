#include<stdio.h>            //printing a table using while loop
int main()
{  int n;
  
   printf("Enter a number to get table of it: ");
   scanf("%d",&n);//user input
   
   int i=1;//starting point
   while(i<=10){//runs from 1 to 10
    printf("%d X %d = %d\n",n,i,n*i);
    i = i + 1;//it adds 1 to i after each eitheration
   }
   return 0;
}