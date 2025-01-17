#include<stdio.h>//To find the sum of given square in side the matrix
int main(){
  int m,n,sum=0;
  printf("Enter the row size of the array:");
  scanf("%d",&m);//rows size
  printf("Enter the column size of the array:");
  scanf("%d",&n);//column size
   int arr[m][n];
   printf("\nEnter the %d array elements:",m*n);
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
     scanf("%d",&arr[i][j]);//taking input of elements
    }
  }
  printf("\nThe array elements are = \n");
  for(int i=0;i<m;i++){
    printf("\n");
    for(int j=0;j<n;j++){
    printf("\t%d",arr[i][j]);//printing of array elements
    }
  }
//basically we are calculating the sum of a square within the matrix not the sum of all element of the matrix
  int l1,r1;//this is the starting place
  printf("\nEnter the starting and ending cordinates(1st loop):");
  scanf("%d %d",&l1,&r1);// 0 3
  int l2,r2;//this is the ending place
  printf("\nEnter the starting and ending cordinates(1st loop):");
  scanf("%d %d",&l2,&r2);// 1 5

   for(int i=l1;i<r1;i++){
    for(int j=l2;j<r2;j++){
     sum+= arr[i][j];//store the sum of elements within the cordinates
    }
  }
  printf("\nThe sum of secured rectangle is = %d",sum);//prints the sum 
  return 0;
}