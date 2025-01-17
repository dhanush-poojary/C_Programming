#include<stdio.h>//printing fibonacci series using recursion
int fibo(int n){ 
  if(n<=2) return 1; //fibonacci term 1 2 is both 1 so return 1
  //here first fibo(n-1)is done first
  int f3 = fibo(n-1) + fibo(n-2);
  //then it is summed into fino(n-2)
  return f3;
}
int main(){
  int n;
  printf("Enter the term:");
  scanf("%d",&n);//user input
  printf("\nn'th term is = %d",fibo(n));//function called and returned using %d it is printed
  return 0;
}