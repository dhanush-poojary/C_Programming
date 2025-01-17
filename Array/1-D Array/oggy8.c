#include<stdio.h>   //printing 1 to 50 through array
int main(){
  int arr[50]; //array declaration
  printf("The array elements are = \n");
  for(int i=1;i<=50;i++){//loop starts form 1 and goes till 50
    arr[i] = i;//stores value of i in each eitheration of the loop
    printf("\nThe %dst element is = %d",i,arr[i]);//prints

  }
  return 0;
}