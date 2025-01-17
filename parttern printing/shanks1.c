#include<stdio.h> //To print Rhombus pattern
int main(){       //using user input
  int n;
  printf("Enter the number of lines:");
  scanf("%d",&n);

//Rhombus pattern
//   ****
//  ****
// ****
//****

  for(int i=1;i<=n;i++){//it will print lines till n numbers
    printf("\n");
//this loop will print only the white spaces if the n is 4 we are minusing value of i each time ,means if i is 1 then this loop runs 4-1 =3 time means 3 spaces and it will be calculated in the each eitheration
    for(int j=1;j<=n-i;j++){
      printf(" ");
    }
    //in this loop in the place of i we had putten n bcz we need to print n number of stars here so we if we want to print stars as much as the value of i we should have putten i
    for(int k=1;k<=n;k++){
      printf("*");
    }
  }
  return 0;
}