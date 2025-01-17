#include<stdio.h>               //to know the absolute value
int main()
{  int x;
  
  printf("\nEnter an integer: ");
  scanf("%d",&x);

  if(x > 0){ //only if x is greater than 0.... it will be positive
    printf("\n%d is a positive integer",x);
    printf("\nThe absolute value of %d is = %d",x,x);
  }
  else{  //it is for negative integer
    printf("\n%d is a negetive integer",x);
  //*********************important**************************** */
    int n = x * (-1);
    //it is used to covert the negative integer into positive integer 
    printf("\nThe absolute value of %d is = %d",x,n);
  }
  return 0;
}