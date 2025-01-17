#include<stdio.h>  //setting 10 in entire 5X5 matrix
int main()
{ int brr[5][5];//an 2-D array declaration
  printf("The array elements are = \n");
  for(int i=0;i<=4;i++){
    printf("\n\n");//enter for neatness
    for(int j=0;j<=4;j++){
      brr[i][j] = 10;//storing 10 in each index of the array brr[][];
      printf("\t%d",brr[i][j]);//printing
    }
  }
    return 0;
}