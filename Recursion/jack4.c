#include<stdio.h>//To print incramenting of number using recursion
//without using a extra parameter/variable
int increamentation(int n){
  //when n becomes 0 the recursive loop/call ends and return to main
  if(n == 0) return; //this is base
   increamentation(n-1);//recursive call and n-1 each time till 0
   printf("\n%d",n);//when coming back from 0 we are printing this line of code
   return; //end of this function
}
int main(){
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);//user input
  increamentation(n);//we are calling our increamenting function 1 time
  return 0;
}