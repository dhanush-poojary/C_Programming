#include<stdio.h>   //To Reverse a entered number
int main()
{  int n,rev=0,ld; //ld is last digit
//??rev=0 bcz we dont want to multiply last digit with itself??
   printf("Enter a positive ineteger: ");
   scanf("%d ",&n);

//dont input zero bcz it removes the zero and prints other numbers
  
   while(n!=0){//it is true untill n becomes 0
    ld = n % 10; //last digit of n gets stored in ld

    //in first time we multiply 0 with 10 bcz we dont want make it any other number , means 1*10 +5 becomes 15 it is wrong

    rev = rev * 10 + ld;//we are making it to (5*10)bcz we have to add a number next to it like 54 when it is 54321
    //else it will add 5 into 4 
    n = n /10;//last digit of n gets cutted each time
   } 
   printf("The reversed number is = %d",rev);//prints rev of num


    return 0;
}