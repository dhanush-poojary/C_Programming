#include<stdio.h>  //using recursion find the power number
int pow(int a,int b){             //linear method
  if(b == 0)return 1; //base case is for base not for power which is a its 0 means 2 to the power 0 is 1
  return a*pow(a,b-1);//here where multipling a with each b-1 from 1 and a is non touched
}
int main(){
  int a,b;
  printf("Enter the base and power:");
  scanf("%d %d",&a,&b);//user inputs
  printf("\nThe power is = %d",pow(a,b));//function called within the printf and %d through which it has printed 
  return 0;
}