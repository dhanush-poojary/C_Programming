#include<stdio.h>  //To print star table pattern
int main(){        //using user input
  int n;
  printf("Enter the number of lines: ");
  scanf("%d",&n);//we are just printing the same star pattern but with space inbetween

//star table
//*********
//**** ****
//***   ***
//**     **
//*       *

//we are dividing the task in 2 parts first we are printing the 1st lines stars and then after things
  int m = n; //this m is for printing the 1st line of stars
  int nsp = 1;//we are starting from printing 1 space in 2nd line
  int nst = n;//this is bcz we need equal stars in 2nd line and +1 space

  for(int i=1 ; i<=2*m+1;i++){//the 1st line of star should always be *2 of n and + 1 bcz we have a space in 2nd line 
    printf("*");
  }
  printf("\n");//it is neccessary else afterwards things will messup
  for(int i=1;i<=n;i++){//for printing the lines
     for(int h=1;h<=nst;h++){ //for printing the stars
      printf("*");
    }
    for(int j=1;j<=nsp;j++){//for printing the spaces
      printf(" ");
    }
     for(int k=1;k<=nst;k++){//for printing the stars
      printf("*");
    }
    nst--;//number of stars gets less in each line by 1
    nsp+=2;//in pattern the spaces are increamented by 2 from 2nd line
    
   printf("\n");//carries to next line
  }
  return 0;
}