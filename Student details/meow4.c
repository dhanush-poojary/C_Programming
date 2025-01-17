#include<stdio.h>                    //student details(id)
int main()
{  int rollno,marks;
   float height,percentage;
   char name;
   //user inputs
   printf("\nEnter your name: ");
   scanf("%s",&name);
   
   printf("\nEnter rollno and marks with percentage number: ");
   scanf("%d %d %f",&rollno,&marks,&percentage);

   printf("\nEnter your height: ");
   scanf("%f",&height);
   //displaying output
   printf("\n\n");//it leave a line
   printf("\nYour name is = %10s",name);//10s is legnth of string(name)  
   printf("\nYour roll number is = %2d",rollno);  
   printf("\nYour height is = %1.2f",height); 
   printf("\nYour marks = %3d",marks); 
   printf("\nYour percentage is = %2.2f",percentage); 
   return 0;//it returns nothing to main function
}