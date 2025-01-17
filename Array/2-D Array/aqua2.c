#include<stdio.h>//To take transpose of a matrix nXn without using any another matrix
//matrix 1
//first matrix
//    1       2       3
//    4       5       6
//    7       8       9
//it's transpose
//    1       4       7
//    2       5       8
//    3       6       9

int main(){ //square hold same size for row as we as column
  int n;
  printf("Enter the value of n matrix");
  scanf("%d",&n);//size of square is both same
  int arr[n][n];//array declaration
  printf("\nEnter the %d array elements:",n*n);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
     scanf("%d",&arr[i][j]);//taking input of array elements
    }
  }
  printf("\nThe first matrix is = \n");
  for(int i=0;i<n;i++){
    printf("\n");
    for(int j=0;j<n;j++){
    printf("\t%d",arr[i][j]);//printing of array elements
    }
  }
  //in this we are not using an extra array for transposing thats way we have to swap function that will swap the (i,j) into (j,i) only if it is symmetric which is(1,2) into (2,1)in this (1,1) and (0,0)will remain same which is reflesive property
 for(int i=0;i<n;i++){
   for(int j=i;j<n;j++){ // j=0 & j<=i this is also effective
    int temp = arr[i][j];
    arr[i][j] = arr[j][i];
    arr[j][i] = temp;//basic swap function code
    }
  }
  printf("\nThe transpose/inversed matrix is = \n");
  for(int i=0;i<n;i++){
    printf("\n");
    for(int j=0;j<n;j++){
    printf("\t%d",arr[i][j]);//printing of modified array
    }
  }
  return 0;
}