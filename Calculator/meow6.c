#include<stdio.h>                    //automatic calculator
int main()                           //using if statement
{  int a,b;
   float c;
   char op;
   /*here c is float because the input may be a float
   there is an issue while inputing floating point number */
   printf("\nEnter the first number:");
   scanf("\n%d",&a);

   printf("\nEnter the operator:");
   scanf("\n%c",&op);
   
   printf("\nEnter the second number:");
   scanf("\n%d",&b);
   
   //here the op is compared with each operator untill it matches one or it will became a false and goes to else
   if(op == '+'){ // ''single quotation is for char type
       c = a + b;
       printf("\n\n%d + %d = %f",a,b,c);
   }
    else if(op =='-'){
       c = a - b;
       printf("\n\n%d + %d = %f",a,b,c);
   }
   else if(op == '*'){
       c = a * b;
       printf("\n\n%d + %d = %f",a,b,c);
   }
   else if(op == '/'){
       c = (float)a / b;  //here the datatype of a is int but we type casted it to float so that it can be divided
       printf("\n\n%d / %d = %.2f",a,b,c);
   } 
   else { //if any above cases are false this will be executed
       printf("\nPlease enter a correct operator!");
   }
   return 0;
   //it returns nothing to main function

} 