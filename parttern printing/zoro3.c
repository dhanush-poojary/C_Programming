#include<stdio.h>  //To print the given number square parttern
int main()        //using user input
{ int n,m;
   printf("Enter the number of rows and columns: ");
   scanf("%d",&n); //user input

    m = n; //generally in square rows and columns should be equal
  // number square
  // 1 2 3 4 
  // 1 2 3 4 
  // 1 2 3 4 
  // 1 2 3 4 
  
   for(int i = 1;i<=n;i++){ //prints \n in each eitheration
    printf("\n");  //prints new line
    for(int j=1;j<=m;j++){  //here the loop goes till m only like n but insted of print star we had printed the jth value it self
      printf("%d ",j);//this will print like 1 2 3.. till n in 1 line
    }
   }
    return 0;
}