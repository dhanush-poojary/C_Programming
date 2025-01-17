#include<stdio.h>  //basic 2-D array / matrix
int main(){
  int r,c;//rows and columns
  printf("Enter the number of rows:");
  scanf("%d",&r);//rows input
  printf("Enter the number of columns:");
  scanf("%d",&c);//columns input
  int arr[r][c];//array declaration
  printf("\nEnter the %d array elements:",r*c);
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d",&arr[i][j]);//array inputing
    }
  }
  printf("\nThe array elements are = \n");
  for(int i=0;i<r;i++){
    printf("\n");//newline after each row
    for(int j=0;j<c;j++){
     printf("%d ",arr[i][j]);//array outputing
    }
  }
  return 0;
}