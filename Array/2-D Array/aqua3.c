#include<stdio.h>//To multiply 2 matrix
#include<stdlib.h>
int main(){
  int m,n,r,c;
  printf("Enter the rows and columns of matrix 1:");
  scanf("%d %d",&m,&n);//row and column size of 1st mat
  printf("Enter the rows and columns of matrix 2:");
  scanf("%d %d",&r,&c);//row and column size of 2nd mat
  int mata[m][n],matb[r][c],matc[m][c];//array declarations
  if(n!=r){//if columns of mata are not equal to the rows of matb the multiplication is not possible
    printf("\nmultiplication is not possible!");
    exit(0);
  }
  printf("Enter the %d elements of matrix 1= ",m*n);
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      scanf("%d",&mata[i][j]);//taking input of 1st matrix element
    }
  }
  printf("Enter the %d elements of matrix 1= ",r*c);
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d",&matb[i][j]);//taking input of 2nd matrix element
    }
  }
  printf("\nThe elements of matrix 1 are= ");
  for(int i=0;i<m;i++){
    printf("\n");
    for(int j=0;j<n;j++){
     printf("\t%d",mata[i][j]);//printing of elements of 1st matrix
    }
  }
  printf("\nThe elements of matrix 2 are= ");
  for(int i=0;i<r;i++){
    printf("\n");
    for(int j=0;j<c;j++){
      printf("\t%d",matb[i][j]);//printing of elements of 1st matrix
    }
  }
  int nr = n = r;//this column of 2st and row of 2nd matrix is the number of elements there are present in that line
  for(int i=0;i<m;i++){ //this is the calculation of resultant so we have to use row of 1st matrix and column of 2nd matrix 
    for(int j=0;j<c;j++){
      matc[i][j] = 0;
      for(int k=0;k<nr;k++){
        matc[i][j]+= mata[i][k] * matb[k][j];//we have to add all the element in i'th and j'th line as we as multipling  'nr' is the stoper/number element  present in the matrix 
      }
    }
  }
  printf("\nThe multiplication of 2 maatrix are = \n");
  for(int i=0;i<m;i++){
    printf("\n");
    for(int j=0;j<c;j++){
      printf("\t%d",matc[i][j]);//printing of the resultant matrix
    }
  }
  return 0;
}