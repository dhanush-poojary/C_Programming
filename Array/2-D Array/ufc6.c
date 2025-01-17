#include<stdio.h> //The sum of 2 matrix
int main()
{ int i,j,r=2,c=2,matrix_a[r][c],matrix_b[r][c],matrix_c[r][c]; //declaration of 3 different 2-d matrices
//////////////*************important***************/////////
//if the dimension of matrix(r&c) are not same then that can not be added.in case of addition the r&c of 2 matrix must be same
  printf("Enter the %d elements of matrix 1:",2*2);//r*c
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      scanf("%d",&matrix_a[i][j]);//inputing of elements of matrix
    }
  }
  printf("Enter the %d elements of matrix 2:",2*2);//r*c
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      scanf("%d",&matrix_b[i][j]);//inputing of elements of matrix
    }
  }
  printf("\nThe elements of matrix 1 are=\n ");//1st matrix
  for(i=0;i<r;i++){
    printf("\n");//newline
    for(j=0;j<c;j++){
    printf("\t%d",matrix_a[i][j]);//printing of matrix elements
    }
  }
   printf("\nThe elements of matrix 2 are=\n ");//2nd matrix
  for(i=0;i<r;i++){
    printf("\n");//newline
    for(j=0;j<c;j++){
    printf("\t%d",matrix_b[i][j]);//printing of matrix elements
    }
  }
  //here the sum is done between the mata's i,j and matb's i,j and is stored in matc's i,j
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
    matrix_c[i][j] =  matrix_a[i][j] + matrix_b[i][j];//storing the sum of each index of matrix a and b in c 
    }
  }
  printf("\nThe sum of 2 matrix are= \n ");//3rd matrix
  for(i=0;i<r;i++){
    printf("\n");//newline
    for(j=0;j<c;j++){
    printf("\t%d",matrix_c[i][j]);//printing of matrix elements
    }
  }
    return 0;
}