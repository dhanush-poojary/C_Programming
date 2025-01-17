#include<stdio.h>//wave printing row wise
int main(){
  int m,n;
  printf("Enter the row and columns sizes of matrix:");
  scanf("%d %d",&m,&n);//input of row and columns
  int arr[m][n];//array declaration
  printf("\nEnter the %d elements of the matrix:\n",m*n);
  for(int i=0;i<m;i++)
  {  for(int j=0;j<n;j++){
      scanf("%d",&arr[i][j]);//takig input of array elemets
  }
  }
  //here we are printing wave order in only row wise
//in  even column we are printing normaly but in odd column we are priting
  printf("\nThe array after modification\n");
  int i =0,j=0;
  while(j<n){//in here j remains constent
    if(j%2==0){//for printing even number of colums
  for(int i=0;i<m;i++){
        printf("\t%d",arr[i][j]);//here i is not constent
      }
      }
      else{
        //priting backwards
          for(int i=m-1;i>=0;i--){//for printing even number of rows
        printf("\t%d",arr[i][j]);//here i is not constent
      }
      }
    j++;//incremet the column after each ietheration
  }
    return 0;
}