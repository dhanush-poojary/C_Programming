#include<stdio.h>   //Sum of all series of number till n terms
int main()
{  int sum=0,temp,n;
   printf("Enter the number: ");
   scanf("%d",&n);//user input

   for(int i=1;i<=n;i++){
    //not neccessary
     temp = i ;
     //here we are putting i inside sum and adding into it 
    sum = sum + temp;
  
   }
   printf("The sum of all numbers = %d",sum); //prints sum of 1 2 3 4 5... upto n
    return 0;
}