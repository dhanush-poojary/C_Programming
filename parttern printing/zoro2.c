#include<stdio.h>//to print pattern of solid square parttern
int main()        //using user input
{  int n,m;
   //generally in square rows and columns should be equal
   printf("Enter the number of rows and columns: ");
   scanf("%d",&n); //so we are only taking 1 input
   m = n;//puting inputed value to m
  
  //solid square
  // ****
  // ****
  // ****
  // ****
   for(int i = 1;i<=n;i++){ //this loop is for number of lines
  //using this loop we can print out preffered number times till n values
     printf("\n");//we can use print here also it will be a neat choice 
    for(int j = 1;j<=m;j++){ //this loop prints number of starts till m value
      printf("*");  //out start pattern printer
    }
   }
    return 0;
}