#include<stdio.h>  //To print the entered nth fibonacci number
int main(){
  int f1=0,f2=1,f3,i,n; //f1 is 0 bcz fibonacci series starts from 0 
  
  printf("Enter the number: ");
  scanf("%d",&n);//only n'th terms should be inputed

  for(i=1;i<=n;i++){ //loop goes till nth term
    f3 = f1 + f2; //this is main part of fibonacci
    f1 = f2; //assigning b to a , 1 to a(f1)
    f2 = f3; //assigning c to b , 2 to b(f2)
  }
  //here were print so bcz we need only the last calculated result 
  //else if we need series to be print we can put printf in the for loop 
  printf("\nThe %dth fobanacci number is :- %d",n,f1);
  return 0;
}