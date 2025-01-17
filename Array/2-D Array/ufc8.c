#include<stdio.h> //print the row number whose sum is maximum
#include<limits.h>
int main(){
  int arr[3][4];//array declaration
  int maxsum = INT_MIN;//sets the lowest value
  int index;
  printf("\nEnter the %d array elements:",3*4);
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
     scanf("%d",&arr[i][j]);//storing array elements
    }
  }
  printf("\nThe array elements are = \n");
  for(int i=0;i<3;i++){
    printf("\n");
    for(int j=0;j<4;j++){
    printf("\t%d",arr[i][j]);//printing array elements
    }
  }
  for(int i=0;i<3;i++){
    int sum = 0;//we are taking the sum of each row  so it is mandatory to intialize here
    for(int j=0;j<4;j++){
       sum+= arr[i][j];//it will calculate the sum of each element in a single row
    }
    if(maxsum<sum){//it will be chechked in all i's ietherations then the maximum sum value will be store and  index of the row 
      maxsum = sum;
      index = i;
       }
  }
  printf("\nThe row number is %d and it's sum is  = %d is the greatest",index,maxsum);//this will print the row which has maximum number of sum and its index number
  return 0;  
}