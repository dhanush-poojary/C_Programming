#include<stdio.h>              //to find sum of all even numbers
int main(){
  int n=10,sum=0;
  
  //here we are only adding even numbers not the digits of number so no need to divide
  
  for(int i=1;i<=n;i++){ // it runs from 1 to 10
     if(i%2==0) {//if is so then it will be added into the sum variable each time
       sum = sum + i;
     }
    }
  printf("\nSum of all Even number are = %d",sum);//prints sum of all even numbers till n 
  return 0;
}