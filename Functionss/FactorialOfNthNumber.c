#include<stdio.h>//find the factorial of n'th number
                 //using functions
int factorial(int n);//this is a function prototype
int main(){
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);//user input of any midum range number bcz of int
  factorial(n);
  return 0;
}

int factorial(int n){
  int fact = 1;
  for(int i=1;i<=n;i++){
  //multipling each fact with  increamented i(number) each time
    fact = fact * i;
    printf("\nThe factorial of %d is %d",i,fact);//print of all factorials till n
  }
  return (fact);//end of the function
}