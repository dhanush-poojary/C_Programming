#include<stdio.h>//To print the sum of n numbers 
                 //using extra parameter
void sumof(int n,int sum){
  if(n==0){//base case can be in many lines
  printf("%d",sum);//prints the value of sum when n is 0
   return;
  } 
  sumof(n-1,sum+=n);//adds n-1 value in the each call
  return;//goes back its previous call
}
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);//user input
  sumof(n,0);//function called with n and 0 value for storing sum
 return 0;
}