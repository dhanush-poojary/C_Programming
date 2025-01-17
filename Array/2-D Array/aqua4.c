#include<stdio.h>  //To rotate the matrix at 90 degrees clockwise
int main(){
  int n;
  printf("\nEnter the square matrix dimensions:");
  scanf("%d",&n);
  int arr[n][n];//declaration array 2-D array
  printf("Enter the %d array elements",3*3);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      scanf("%d",&arr[i][j]);//taking 2-D array as input
    }
  }
//firstly we are taking the transpose of the given matrix which is making row as column column as row which will roatate our matrix half way
   for(int i=0;i<n;i++){//code for transpose
    for(int j=i;j<n;j++){
     int temp = arr[i][j];
     arr[i][j] = arr[j][i];
     arr[j][i] = temp;
    }
    }
//secondly we are taking a rotation of element in each row which will roatate our matrix completely in 90degrees clockwise
   for(int i=0;i<n;i++){//code for roatating matrix only elements in the rows (0,0) to(0,3) and (1,0) to (1,2) in case of 3*3 matrix
    for(int j=0,k=n-1;j<=k;j++,k--){
      int temp = arr[i][j];
      arr[i][j] = arr[i][k];
      arr[i][k] = temp;
    }
   }
  printf("\nThe 90 degree rotated array elements = \n");
  for(int i=0;i<n;i++){
    printf("\n");
    for(int j=0;j<n;j++){
     printf("\t%d",arr[i][j]);//printing of final resultant matrix which is roatated in 90 degrees
    }
  }
  return 0;
}