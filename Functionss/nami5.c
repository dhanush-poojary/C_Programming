#include<stdio.h>//To find the fibonacci series 
//using the functions
int fibonacci(int n);//this is the function prototype
int main(){
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);//only n'th terms should be inputed
  fibonacci(n);//function called with n
  return 0;
}

int fibonacci(int n){
   int f1 = 1,f2 = 0,f3;//f1,f2 should always be 1 0 bcz its fibonacci series
  for(int i=1;i<=n;i++){
     f3 = f1 + f2;
     f1 = f2;
     f2 = f3;    
    printf("\nThe %d'th fibonacci is %d",i,f1);//if we print f1 the answer goes like 0 1 1 2 3 5....
  }
  return (f1);//end the function by returning f1 value to the main function
}