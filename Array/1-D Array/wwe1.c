#include<stdio.h>  //To make copy of an array but in reversed order into an another array
int main(){
  int n=5;
  int arr[n],brr[n];//2 array are declared
  printf("\nEnter the 5 array elements: ");
  for(int i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);//1st array or primary array
   }
   printf("\nThe Entered Array=\n");
   for(int j=0;j<n;j++){
     printf("\t%d",arr[j]);//prints the primary array
    //brr[j] = arr[j] ; this will copy the exact array into another  
    brr[j] = arr[n-j-1]; //putting the last element of 1st array to the 1st element of 2nd array and repeating the process till it completely reversed
   }
   printf("\nThe new Reversed Array=\n");
   for(int i=0;i<n;i++){
   printf("\t%d",brr[i]);//printing of 2nd or secondary array
   }
   return 0;
}