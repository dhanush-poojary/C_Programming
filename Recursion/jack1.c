#include<stdio.h>//To print the factorial(n) using recursion
                   //without using any kind of loops
int factorial(int n){
  //this is for returning of 1 and 0's factorial also
   if(n==1 || n==0) return 1;
    //this is a base case :- means end of the loop or end of recursive calling
   int recur = n*factorial(n-1);//recursive call and it works\calls unlimited time until the base case hits 
  return (recur);//end of this function
}
int main(){ //code always stats from main
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);//user input
  int fact = factorial(n);//once called a factorial function
  printf("\nThe factorial of %d is %d",n,fact);//printed a final result of the factorial function
  return 0;
}

