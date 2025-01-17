#include<stdio.h>  //To print star plus pattern
int main()         //using user inputs
{  int n;
   printf("Enter the number of lines: ");
   scanf("%d",&n);//input should be of odd numbers bcz even number goes not have any middle or half eg:- 4/2 2
 
 //star plus
//   *
//   *
// *****
//   *
//   *

   for(int i=1;i<=n;i++){//prints n number of rows
    printf("\n");
    for(int j=1;j<=n;j++){ //this loop also runs till n terms in each eitheration of ith loop

  //here we are checkig whether the middle of n means 5/2 + 1 = 3 so this is out middle number so there we have to print stars or when if we use i in any if condition that means we need to print n number stars in that like with out blank space
      if(j == n/2+1 || i == n/2+1) printf("*");
      else printf(" ");// in remaining spaces we have to print blank spaces
    }
   }
    return 0;//should be used with int type
}