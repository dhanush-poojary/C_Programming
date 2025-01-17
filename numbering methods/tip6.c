#include<stdio.h>//To find the sum of Entered and reversed numbers
int main()

{  int n,copy,rev=0,ld,sum; //ld is last digit

//??rev=0 bcz we dont want to multiply last digit with itself??
   printf("Enter a positive ineteger: ");
   scanf("%d ",&n);

   copy = n;//making a copy of n bcz later it gets modified

//dont input zero bcz it removes the zero and prints other numbers
  
   while(n!=0){//it is true untill n becomes 0
    ld = n % 10; //last digit of n gets stored in ld

    //in first time we multiply 0 with 10 bcz we dont want make it any other number , means 1*10 +5 becomes 15 it is wrong

    rev = rev * 10 + ld;//we are making it to (5*10)bcz we have to add a number next to it like 54 when it is 54321
    //else it will add 5 into 4 
    n = n /10;//last digit of n gets cutted each time
   } 
 
   printf("\nThe Entered number is = %d",copy); //prints ent num
   printf("\nThe reversed number is = %d",rev); //prints rev num
   sum =  copy + rev; //adds both in sum variable

   printf("\nThe sum of Entered and Revered numbers are = %d",sum);//prints the sum of both numbers

    return 0;
}