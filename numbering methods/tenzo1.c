#include<stdio.h>    //To find the fibonacci series
int main()
{  int f1=1,f2=1,f3,n;//f1,f2 should always be 1 1 bcz its fibonacci series

   printf("Enter the n'th term to get the fibonacci series of it: ");
   scanf("%d",&n);//only n'th terms should be inputed

   for(int i = 1;i<=n;i++){
    printf("\n%d",f1);//if we print f1 the answer goes like 1 1 2 3 5....
    //here we are printing only f1 bcz if we print f2 it will be printed like  11 22 33 44 so its wrong
    f3 = f1 + f2; //this is main part of fibonacci
    f1 = f2; //assigning b to a , 1 to a(f1)
    f2 = f3; //assigning c to b , 2 to b(f2)
    
   }
    return 0;
}