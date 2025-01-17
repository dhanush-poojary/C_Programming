#include<stdio.h>  //To print number triangle pattern
int main()          //using user input
{  int n;
   printf("Enter the number of line :");
   scanf("%d",&n);//user input
 
  //number triangle
   //1
   //12
   //123
  //1234

   for(int i=1;i<=n;i++){ //it will print n number of lines
     printf("\n");
     for(int j=1;j<=i;j++){ //it will run till j<=i in each eitheration of 1st loop
       printf("%d",j);//if i is 1 then it will print only 1 then becomes 2 then till will print 1 2 and then so on..
     }
   }
    return 0;
}