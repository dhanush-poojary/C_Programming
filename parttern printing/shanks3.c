#include<stdio.h>//To print number pyramid pattern
int main(){      //using user inputs
   int n;
   printf("Enter the number of lines :");
   scanf("%d",&n);//user input

//number pyramid
//   1
//  123
// 12345
//1234567

  int a = 1;  //we are using a new variable to print the numbers and add 2 in its next line's stars   
   for(int i=1;i<=n;i++){//this loop prints the line
     printf("\n");
     for(int k=1;k<=n-i;k++){//this loop prints spaces
      printf(" ");
     } 
     for(int j=1;j<=a;j++){//this loop will print the numbers 
      printf("%d",j);//instead of stars we are print the value of j it self
     }
     a+=2;//we are not inside initializing the variable as we need to increace the count after printing in a line

   }
   return 0;
}