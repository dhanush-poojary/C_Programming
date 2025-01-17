#include<stdio.h> //To print star pyramid pattern
int main(){       //using user inputs
   int n;
   printf("Enter the number of lines: ");
   scanf("%d",&n);//user input

//star pyramid
//   *
//  ***
// *****
//*******

   int counter = 1;
   for(int i=1;i<=n;i++){ //this loop prints the line

    for(int k=1;k<=n-i;k++){ //this loop prints spaces
    //this is another method of doing the spaces
    //for(int j=n-i;j>=1;j--){
      printf(" ");
    }
    for(int k=1;k<=counter;k++){ //this loop will print the stars 
      printf("*"); 
    }
    printf("\n"); //we are not inside initializing the variable as we need to increace the count after printing in a line
     counter += 2; //we are using a new variable to print the stars and add 2 in its next line's stars
   }
   return 0;

}