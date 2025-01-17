#include<stdio.h>  //To print Hollow recteangle pattern
int main()         //using user inputs
{  int n,m;
   printf("Enter the number of lines: ");
   scanf("%d",&n);//this should 2 values less then m '4'
   printf("Enter the number of lines: ");
   scanf("%d",&m); //this should 2 values more then n '6'

 //Hollow recteangle
  //******
  //*    *
  //*    *
  //******

   for(int i=1;i<=n;i++){ //prints n number of rows
    printf("\n");
    for(int j=1;j<=m;j++){//this loop also runs till n terms in each eitheration of ith loop

//here we are print start if and only if i or j is == 1 or if and only if i == or j == m
      if((i == 1 || j == 1) || (i == n || j == m)) printf("*");
      else printf(" ");//if not then print white space
    }
   }
    return 0;
}