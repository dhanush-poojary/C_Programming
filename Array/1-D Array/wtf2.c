#include<stdio.h>  //product of all array elements 
int main()
{  int size = 5,arr[size];//declaration of array
   int product = 1;
   printf("Enter the numbers: ");
   for(int i=0;i<size;i++){  //taking an array as input
    scanf("%d",&arr[i]);
    product*= arr[i];//multipling the array elements with itself in each ietheration
   }
   printf("\nThe arry elements are = \n");
   for(int j=0;j<size;j++){
      printf("\t%d",arr[j]); //printing of array elements
   }
   printf("\nThe product of all array elements are = %d",product);//printing of product of array elements
    return 0;
}