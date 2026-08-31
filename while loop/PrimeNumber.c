#include<stdio.h>                 //prime number in while loop
void main(){
  int i = 2;//starting point of loop
  int n;//user input
  printf("Enter a number: ");
  scanf("%d",&n);

  int a;//this is for composite
  while(i<n){ //runs like if statement runs it will end loop
    if(n % i == 0){//or else does not enter the loop
      a = 1;//this is for composite
      break;//terminate the loop if it is composite
    } i++;//else add 1 to i
  }
 //basically 1 and 2 are not both numbers
  if(n == 1 || n == 2) printf(" 1 and 2 are neither prime nor composite");
  else if(a==1) printf("%d is composite number",n);
  else printf("%d is prime number",n);
  return 0;  
}