#include<stdio.h> //input and output of 2-D array/ matrix
int main(){
//the elements depends on the size of 2-D array if the array is arr[2][2] then 2*2  = 4 elements to be stored
  int arr[2][2] = {{1,0},{0,1}};//direct declaration
  printf("\nThe array elements are= \n");
  for(int i=0;i<2;i++){//for row
    printf("\n");//prints new line after printing number of elements in a column
    for(int j=0;j<2;j++){ //for column
      printf("%d ",arr[i][j]);//prints the elements of the array
    }
  }
  return 0;   
}