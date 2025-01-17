#include<stdio.h>  //sum of all array elements 
int main()
{  int size = 10,arr[size];//declaration of array
   int sum = 0;
   printf("Enter the numbers: ");
   for(int i=0;i<=size;i++){  //taking an array as input
    scanf("%d",&arr[i]);
    sum+= arr[i];//putting all the inputs inside sum variable
   }
   printf("\nThe arry elements are = \n");
   for(int j=0;j<size;j++){
      printf("\t%d",arr[j]); //printing of array elements
   }
   printf("\nThe sum of all array elements are = %d",sum);//printing of sum of array elements
    return 0;
}