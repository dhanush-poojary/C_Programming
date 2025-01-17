#include<stdio.h>    //To print star triangle mast pattern
int main(){         ///using user input
  int n,i;
  printf("Enter the number of lines: ");
  scanf("%d",&n);

//star triangle mast
//   *
//  **
// ***
//****
  for(int i=1;i<=n;i++){//it will print lines till n numbers
    printf("\n");
//this loop will print only the white spaces if the n is 4 we are minusing value of i each time ,means if i is 1 then this loop runs 4-1 =3 time means 3 spaces and it will be calculated in the each eitheration
  for(int k=1;k<=n-i;k++)
  {
      printf(" ");
  }
  for(int j=1;j<=i;j++)//it will opparate as many times as the value of i, if i is 1 then 1 times loop will run
  { //print the stars as the value of i
    printf("*");
  }
  }
  return 0;
}
