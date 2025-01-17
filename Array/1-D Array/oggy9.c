#include<stdio.h>   //printing the elements reverse
int main(){
  int arr[5]; //array declaration
  printf("Enter the array elements are = \n");
  for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
  }

  for(int i=4;i>=0;i--){//going in reverse odering in array indexes
   
    printf("\nthe %dth element is = %d",i,arr[i]);//from 4 to 0 th index

  }
  return 0;
}