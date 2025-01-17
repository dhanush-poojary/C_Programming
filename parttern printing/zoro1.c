#include<stdio.h> //to print pattern of solid ractangle parttern
int main()        //using user input
{  int rows,columns;//basically lines denotes row and number of star denotes columns
   
   // solid ractangle
   //    ******
   //    ******
   //    ******
   printf("Enter the number of lines :");
   scanf("%d",&rows);
   printf("Enter the number of starts :");
   scanf("%d",&columns);
   //user inputs 

 ///**************important*************************** */
 //1.always use different variables in nested loops
 //2.after the loop gets ended it will restart from initialization

  //basically here rows are * by columns 2 * 5 means 10 stars are printed in 2 lines, 5 starts each in a line
   for(int i = 1;i<=rows;i++){  //this loop is for number of lines
  //using this loop we can print out preffered number times
    for(int i=1;i<=columns;i++){ //this loop prints number of starts 
       printf("*"); //out start pattern printer
    }
     printf("\n"); //this is used so bcz we have print start in different line after each eitheration of the loop
   }
    return 0;
}