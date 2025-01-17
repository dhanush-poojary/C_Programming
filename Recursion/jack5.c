#include<stdio.h> //To print decreasing to increasing order
int inc_dec(int n){                    //using recursion
  if(n==0) return; //base case when n becomes 0 this recursive loop will redirected to its revious call

  printf("\n%d",n);//prints 3,2,1
  inc_dec(n-1);//recursive call goes till 0 and return till n
  printf("\n%d",n);//prinnts 1,2,3
  return;//goes back its previous call
}
int main(){
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);//user input
  inc_dec(n);//function called with n
}