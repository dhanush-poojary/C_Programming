#include<stdio.h>  //To print alphabet triangle pattern
int main()         //using user input
{  int n; 
   printf("Enter the number of lines: ");
   scanf("%d",&n);//user input

  //alphabet triangle
  //A
  //A B 
  //A B C 
  //A B C D
  //A B C D E

//so we need to use ASCII so we made use of type casting int to char type using %c in printf
   for(int i=1;i<=n;i++){ //this loop prins number of rows
      printf("\n");
  //if we initialize a outside the for loop then we can print continues values like 65 66 67 68...n     
    int alpha = 65; //initializes a in each eitheration with 65 bcz A 's ASCII value is 65
    for(int j=1;j<=i;j++){ //here insted of n we had taken i bcz we have to print i alphabet in nth line means 1 alphabet in 1st line and 2 in 2nd line....so on

  //we coverted int to char by changing typespecifier of %c
      printf("%c ",alpha); //prints A B C D
      alpha++;//adds 1 to alpha = 65 + 1
    }                                                   
   }
    return 0;
}