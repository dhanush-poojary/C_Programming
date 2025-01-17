#include<stdio.h>//To print the sum of n numbers 
                 //without using extra parameter
int sumof(int n){
  int sum;
  if(n == 0 || n==1) return n;//when n==1 return 1 to the previous call
  sum = n +sumof(n-1); //using this formula we are adding while its returning back from 1/0
   return sum;//goes back its previous call
}
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);//user input
  int sum = sumof(n);//function called with n and storing returned value in sum
  
  printf("%d",sum);//prints return value of the sumof()function
  return 0;
}