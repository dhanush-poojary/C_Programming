#include<stdio.h>  //To print alphabet square pattern
int main()         //using user input
{  int n; 
   printf("Enter the number of lines: ");
   scanf("%d",&n);
 //alphabet square
  //A B C D
  //A B C D
  //A B C D
  //A B C D
   
//so we need to use ASCII so we made use of type casting int to char type using %c in printf
   for(int i=1;i<=n;i++){ //this loop prins number of rows
      printf("\n");
  //if we initialize a outside the for loop then we can print continues values like 65 66 67 68...n     
    int alpha = 65; //initializes a in each eitheration with 65 bcz A 's ASCII value is 65
    for(int j=1;j<=n;j++){ //we are print n alphabets in each line till n lines
    //we coverted int to char by changing typespecifier of %c
      printf("%c ",alpha); //prints A B C D
      alpha++;//adds 1 to alpha = 65 + 1
    }                                                   
   }
    return 0;
}