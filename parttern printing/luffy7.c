#include<stdio.h>  //To print 0 and 1 triangle pattern
int main()         //using user inputs
{  int n;
   printf("Enter the number of lines: ");
   scanf("%d",&n);//here we need only rows to be inputed
  
 //0 and 1 triangle
 //1
 //0 1
 //1 0 1
 //0 1 0 1 
  
  int a; //we are printing 1 and o using this variavble
  for(int i=1;i<=n;i++){ //this loop will print a new line in its each eitheration
    printf("\n");
//this if statement is to decide if i is odd then a=1 it means if i is odd then start the row with 1
//else if it is even then start it from 0 itself
    if(i%2!=0) a = 1;
    else a = 0;
    for(int j=1;j<=i;j++){//this loop will print a in its each eitheration like if i is 1 then 1 times and ...so on
      printf("%d",a);//prints only 0 and 1
  //this if statement is to change the value 1 in its each eitheration if it is 1 then 0,if it is 0 then 1..
      if(a == 0)a = 1;
      else a = 0;
    }
 } 

////another method of doing the same
//int a = 1, b = 0; //we are printing 1 and o using these variavble
//   for(int i=1;i<=n;i++){ //this loop will print a new line in its each eitheration
//     printf("\n");
    
//     for(int j=1;j<=i;j++){//this loop will print a in its each eitheration like if i is 1 then 1 times and ...so on

//this if statement will calculate the sum of i and j and checks if it can be divisible by 2 
//in this we are printing 1 in the even places and 0 in the odd places..
//       if((i+j)%2==0)printf("%d",a); //prints only 1
//       else printf("%d",b); //prints only0
//     }
//  }
    return 0;

}
