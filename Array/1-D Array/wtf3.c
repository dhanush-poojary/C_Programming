#include<stdio.h> //to find the maximum and minimum element in the array
#include<limits.h>//this headerfile is used to for min and max built in functions
int main(){
  int arr[10];
  //built in function of #include<limits.h>
  int max = INT_MIN;//this provides the lowest integer 
  int min = INT_MAX;//this provides the largest integer
  printf("Enter the elements : ");
  for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);//user inputs of array elements
  }
  for(int j = 0;j<10;j++){
    if(max < arr[j]){  //this is for finding the lowest element in an array
      max = arr[j];
    }
    if(min > arr[j]){//this is for finding the largest element in an array
      min = arr[j];;
    }
  }
  printf("\nThe array elements are = ");
   for(int i=0;i<0;i++){
    printf("\t%d",arr[i]);//printing of array elements
  }
  printf("\nThe minimum element = %d",min);//minimum
  printf("\nThe maximum element = %d",max);//maximum
  return 0;
}