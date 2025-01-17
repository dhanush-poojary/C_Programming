//student marks details and calculator
#include<stdio.h>
#include <stdlib.h> //this header file is used for exit()fucntion
int main()
{  int m1,m2,m3,m4,m5,m6;
   float total; // this is float bcz of division for percentage
   float percentage;
  
  //Entering 6 subjects marks of a student //3d is for 3 digits
   printf("\n\n");
   printf("Enter the subject 1 marks: ");
   scanf("%3d",&m1);
   
   printf("Enter the subject 2 marks: ");
   scanf("%3d",&m2);

   printf("Enter the subject 3 marks: ");
   scanf("%3d",&m3);
  
   printf("Enter the subject 4 marks: ");
   scanf("%3d",&m4);
   
   printf("Enter the subject 5 marks: ");
   scanf("%3d",&m5);

   printf("Enter the subject 6 marks: ");
   scanf("%3d",&m6);

   printf("\n\n");//represents 1 line

   total = m1+m2+m3+m4+m5+m6;
   printf("TOTAL MARKS = %3.f\n",total);
   //here it will only print value before the (.) as above mentioned %3.f  after (.)nothing is there so nothing will be printed   
   percentage = (total*100)/600.00;//.00 is needed by float type
 
   printf("\nPERCENTAGE = %2.2f\n",percentage);
   //only 2 digits before and after the (.)will be printed
   //here it checks the percentage with each iteration 
     if(percentage <= 34.9)
      {
         printf("\nGrade = Fail");
      }//&& represents and operator (and)
      else if(percentage >= 35 && percentage < 65 )
      {
         printf("\nGrade = B");
      }
       else if(percentage >= 65 && percentage < 84.9 )
      {
         printf("\nGrade = A");
      }
      else if(percentage >=85){
         printf("\nGrade = Distinction");
      }
      else { //if the above conditions are not fullfilled  this will be executed
      printf("\nSomething went wrong!");
      }
      
      //here it checkes if any of the 6sub marks is less then 34
      //if the marks is less then 34 printf()will be displayed
      if(m1 && m2 && m3 && m4 && m5 && m6  <= 34)
      {
         printf("\nGrade = Not Cleared!");
      }
      else{//if the all 6 sub marks are greater then 34 this will be executed 
           exit(0);//this is used to end the entire program to terminate the program like stopping something at an instent
      }
         return 0;
   } 
     

