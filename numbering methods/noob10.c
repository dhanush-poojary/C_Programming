#include<stdio.h>    //to get the sum of all entered digits 
int main(){
  int n,last_digit,sum=0; 
   
   printf("Enter the numbers: ");
   scanf("%d",&n);//user can enter only positive integer

  //for example 12345

   while(n!=0)//it runs untill n becomes 0
  {  last_digit = n % 10; // it stores 5 in ld and n remains same
     //any number module by 10 , we get last digit as answer
     sum = sum + last_digit ; //ld is added into sum each time
     n = n / 10;//here it will cut last digit from 12345 means 1234 will be ....so on
     //here n is changed many times 
  }
  printf("The sum of the digits is = %d",sum);//it prints sum of all digits of number entered
  return 0;
}