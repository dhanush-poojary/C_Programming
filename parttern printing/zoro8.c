#include<stdio.h>  //To print odd number trinagle pattern
int main()         //using user input
{  int n;
   printf("Enter the number of lines: ");
   scanf("%d",&n);//we need only the rows here
  
  //odd number trinagle
  //1
  //1 3
  //1 3 5
  //1 3 5 7

   for(int i=1;i<=n;i++){//it will print lines till n numbers
   //if we initialize a outside the for loop then we can print continues values like 1 2 3 4 5..n
    int a = 1; //initializes a in each eitheration with 1 
    printf("\n");  //provides a new line
    for(int j=1;j<=i;j++){ //it will opparate as many times as the value of i, if i is 1 then 1 times loop will run
      printf("%d ",a); //here we made use of new variable so that we can print odd numbers
      a = a + 2;//odd numbers have difference of 2 so we are adding 1 to 2 in a = 3
    }
   }
    return 0;
}