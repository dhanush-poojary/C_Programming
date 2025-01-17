#include<stdio.h> //The sum of given matrix
int main()
{ int i,j,m=2,n=2,matrix_a[m][n],sum=0;//matrix declaration
  printf("Enter the %d elements of matrix:",2*2);//r*c
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      scanf("%d",&matrix_a[i][j]);//inputing of elements of matrix
    }
  }
  printf("\nThe elements of matrix are=\n ");
  for(i=0;i<m;i++){
    printf("\n");//newline
    for(j=0;j<n;j++){
    printf("\t%d",matrix_a[i][j]);//printing of matrix elements
    }
  }
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
     sum+=matrix_a[i][j];//adding each index's elements in the sum variable
    }
  }
   printf("\nThe sum of matrix are = %d",sum);//prints sum of matrix
    return 0;
}