#include<stdio.h>  //this is a mathematics calculator
#include<stdlib.h>  
#include<conio.h>
#include<math.h>
int sqrtof(int a){//this will find square root
  
  return sqrt(a);
  
}
int powof(int a,int b){//this will find power
   
   return pow(a,b);
}
//there is a difference in calculating integer and double type absolute value for int abs and for double fabs is used
//this will find the absolute of int type
int absof(int a){
   a = abs(a);
   return a;
}
//this will find the absolute of double type
float fabsof(int a){
    a = fabs(a);
   return a;
}

int main(){ 
  int choice,x,y,p,q;
  float z; 
  //this do while loop will run until the user does something wrong in choice else when the user wants to exit by pressing 4
  do{
  //we are using system collor of c language
  printf("\n\t\033[0;36mWelcome!");
  printf("\n\033[0;33m1. square root");
  printf("\n\033[0;33m2. power of");
  printf("\n\033[0;33m3. absolute of");
  printf("\n\033[0;33m4. exit program");
  printf("\nEnter your choice :");
  scanf("%d",&choice); //this is our case variable
  switch (choice)
  {
  case 1: //this will find square root
    printf("\nEnter a number: ");
    scanf("%d",&x);
    int root = sqrtof(x);//function call 
    printf("\nThe square root of %d is = %d",x,root);
    x = root = 0; //we are initializing these to 0
    break;
  case 2://this will find power

    printf("\nEnter the base and power: ");
    scanf("%d %d",&x,&y);
    int power = powof(x,y);//function call 
    printf("\nThe %d raised to the power %d is = %d\n",x,y,power);
    x = y = power =0;//we are initializing these to 0
    break;
  case 3://this will find absolute of integer and decimal types
   printf("is it a integer(1) or decimal(2) type:");
   scanf("%d",&p);
   if(p==1){
    printf("\nEnter an integer :");
    scanf("%d",&x);
    int absolute = absof(x);//function call 
    printf("\nThe absolute of %d is = %d\n",x,absolute);
    x = absolute = 0; //we are initializing these to 0
    }
   if(p==2){
   printf("\nEnter an decimal :");
    scanf("%f ",&z);
    int absolute = fabsof(z);//function call 
    printf("\nThe absolute of %f is = %f\n",z,absolute);
    z = absolute = 0;//we are initializing these to 0
    }
    break;
  case 4: //to get out of the program
    printf("\nExing...\n");
    getch(); //this is for get out of the entire program
    exit(0); //stdlib.h is the header 
  default:
    printf("Invalid operator!\n");
    getch(); //this is for get out of the entire program
    exit(0); //stdlib.h is the header
  }
  }while(choice!=4); //runs untill it matches 4
  return 0;
}