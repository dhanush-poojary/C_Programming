#include<stdio.h>  //To print star cross pattern
int main()         //using user inputs
{  int n;
   printf("Enter the number of lines: ");
   scanf("%d",&n);//input should be of odd numbers bcz even number goes not have any middle or half eg:- 4/2 2

  //star cross  //when i = j is happening the star is printing
  //  12345     //also when i+j == n+1 then also star is printing
  //1 *   *     //1 + 5 = 6 and 4 + 2 = 6
  //2  * *
  //3   *
  //4  * *
  //5 *   *

   for(int i=1;i<=n;i++){//prints n number of rows
    printf("\n");
    for(int j=1;j<=n;j++){ //this loop also runs till n terms in each eitheration of ith loop
//here we are seeing if i and j are equal then print a star or if (i+j) == n+1 print a star
      if(j == i || (i+j) == n+1) printf("*");
      else printf(" ");// in remaining spaces we have to print blank spaces
    }
   }
    return 0;
}