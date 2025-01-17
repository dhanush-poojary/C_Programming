#include<stdio.h>//To take transpose of a matrix and change and make it to another matrix
//matrix 1
//columns
//1       2       3  //rows
//4       5       6
//new matrix
//rows
// 1       4//columns
// 2       5
// 3       6
int main(){
  int r,c;
  printf("Enter the row and column sizes:");
  scanf("%d %d",&r,&c);//row and column size
  int arr[r][c];//an array declaration
  printf("\nEnter the %d array elements:",r*c);
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
     scanf("%d",&arr[i][j]);//taking input of array element
    }
  }
  printf("\nThe first matrix is = \n");
  for(int i=0;i<r;i++){
    printf("\n");
    for(int j=0;j<c;j++){
    printf("\t%d",arr[i][j]);//printing of array element
    }
  }
  int brr[c][r];//new array declaration
  for(int i=0;i<c;i++){
  for(int j=0;j<r;j++){
       brr[i][j] = arr[j][i];//here we are storing the transposed array into an another array by interchange row into column and column into row
    }
  }
  printf("\nThe second/transposed matrix is = \n");
  for(int i=0;i<c;i++){ //after transpose the matrix is slightly changed so we interchanged c and r 's place
    printf("\n");
    for(int j=0;j<r;j++){
    printf("\t%d",brr[i][j]);//printing the newly created array
    }
  }
  return 0;
}