#include<stdio.h>//To print transpose/inverse of the given matrix
//inverse means making row as column and column as row
int main(){
  int r,c;
  printf("Enter the row and column sizes:");
  scanf("%d %d",&r,&c);//row and column size
  int arr[r][c];//array declaration
  printf("\nEnter the %d array elements:",r*c);
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
     scanf("%d",&arr[i][j]);//taking input of the array element
    }
  }
  printf("\nThe normal matrix is = \n");
  for(int i=0;i<r;i++){
    printf("\n");
    for(int j=0;j<c;j++){
    printf("\t%d",arr[i][j]);//priting the array element
    }
  }
//basically interchange the positions of row into columns and columns into rows and then printing the matrix
   printf("\nThe transposed/inversed matrix is =\n");
    for(int i=0;i<c;i++){//it is c instead of r
    printf("\n");
  for(int j=0;j<r;j++){//it is r instead of c
    printf("\t%d",arr[j][i]);//we are printing in the same opposite manner
    }
  }
  return 0;
}