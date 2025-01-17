#include<stdio.h>    //to get the total number of digits entered
int main()
{  int n;
   int count=0; //count will store the number of digits
  
   printf("Enter a integer: ");
   scanf("%d",&n);//user input
 
  //for example 12345

   while(n!=0){//it runs untill n becomes 0
    n = n /10;// it becomes 1234
    //any number divided by 10 ,the last digit of number is cutted

    count++; //it will add 1 count when the number is cutted
   }
  printf("\nTotal number of digits are = %d",count);//it prints the count that is number of digits
  return 0;
}
