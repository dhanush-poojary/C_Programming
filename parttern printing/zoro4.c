#include<stdio.h>  //To print star triangle  parttern
int main()          //using user input
{  int n;
   printf("Enter the number of lines: ");
   scanf("%d",&n);// we had taken onlt 1 input bcz here inthis we have to print 1 star in 1st line and 2 star in 2nd line and... so on till n stars in nth line
  
   //star triangle
   // *
   // * *
   // * * *
   // * * * *

   for(int i=1;i<=n;i++){ //it prints line as usual
    printf("\n");
    for(int j=1;j<=i;j++){ //but here we are ruuning this loop only till j = i menas when i is 1 then this loop will print 1 star then i is 2 then prints 2 stars...n
      printf("* "); 
    }
   }

    return 0;
}