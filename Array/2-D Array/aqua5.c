#include<stdio.h>//wave printing column wise
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
//here we are printing wave order in only column wise
//in  even row we are printing normaly but in odd row we are priting our elemets backwards order
  printf("\nThe array after modification\n");
  for(int i=0;i<m;i++) //here i remains constent
  {  if(i%2==0){ //for printing even number of rows
    for(int j=0;j<n;j++){
      printf("\t%d",arr[i][j]);//here j is not constent
    }
  }
  else{
    //priting backwards
      for(int j=n-1;j>=0;j--){//for printing even number of rows
      printf("\t%d",arr[i][j]);//here j is not constent
    }
  }  
  }
 } 
    return 0;
}