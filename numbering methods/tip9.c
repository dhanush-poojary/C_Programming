#include<stdio.h>   //sum of series of numbers
//we have to go with the pattern :- 1-2+3-4+5-6+7....upto n
int main()
{  int sum=0,n;
   printf("Enter the number: ");
   scanf("%f",&n);
  //we have to go with the pattern :- 1-2+3-4+5-6+7....upto n
  //so in this we are adding the odd(1,3,5..) numbers and substracting the even(2,4,6..) numbers
  //so we have put if statements
     for(int i=1;i<=n;i++){ //loop runs normally till i<=n
    if( i% 2 != 0){ //if i is odd then add 1 to it 
      // sum = sum + i ; 
    }
    else{ //else it is even then substract 1 from it
       sum = sum - i;
    } 
   }
   printf("The sum of all series of numbers = %.2f",sum);//it prints the final value after the calculation
    return 0;
}