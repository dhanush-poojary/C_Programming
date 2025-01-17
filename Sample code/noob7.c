#include<stdio.h>                 //swapping methods
int main(){
   int a=10,b=20,temp;
   printf("Before swapping: a = %d & b = %d",a,b);
   temp = a;// temp 10
   a = b;//a 20
   b = temp;//b 10
   printf("\nAfter swapping: a = %d & b = %d",a,b); 

 //another method of swapping    
      a = a + b;//30 = 10 + 20
      b = a - b;//10 = 30 - 20
      a = a - b;//20 = 30 - 10
     printf("\nAfter swapping: a = %d & b = %d",a,b);
  
}