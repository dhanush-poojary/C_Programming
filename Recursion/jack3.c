#include<stdio.h>//To print incramenting of number using recursion
//using a extra parameter/variable
int increamentation(int x,int n){
  //it will keep on calling untill x is > then n
  if(x > n) return;//base case
  else
  {  printf("\n%d",x); //printer
    //we are increasing value of x as 1 and .... till n+1 to break the chain
     return increamentation(x+1,n);//it is a recursive call
  }
 
}
int main(){
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);//user input
  //here 1 is for starting point and n is endig point
  increamentation(1,n);
  return 0;
}
