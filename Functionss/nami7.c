#include<stdio.h>//to find wheather it is a prime or not using functions
int prime(int a){
 int assume;
 for(int i=2;i<=a;i++){
    assume = 1;//we are assume every number as prime 
for(int j=2;j<i/2;j++){//half way saves many calculations as the prime does not divide any number
  if(i%j==0){//we are dividing i with its half way numbers for eg:- 7 with 2 3 
    assume = 0;//we are assuming it is not prime number and 
    continue;//skiping this step/ ietheration
  }
 }
}
return assume;//returning 1 OR 0
}

int main(){
  int n;
  printf("Enter the number: ");
  scanf("%d",&n);//user inputs
  int value = prime(n);//function called and return value stored in value variable
  if(value == 1)//1 is for printing prime number and 0 is for printing not a prime number
  printf("\n%d The number is prime ..",n);
  else printf("\nThe number is not a prime!");
}