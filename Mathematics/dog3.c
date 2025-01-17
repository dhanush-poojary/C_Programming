#include <stdio.h>           //sample program for heirarchy of operation
int main()
{
  int n;
  printf("Enter a number:");
  scanf("%d", &n);
  
  /*if we directly write with '()' the else will be executed or else
 we use the brackects for first 2 condition it will show the answer as true bcz'&&'
has a first priority then '||'*/
  if ((n % 5 == 0 || n % 3 == 0) && n % 15 != 0)
//if n=15  //True       True          False           = False
    printf("True");
  else//this will run
    printf("False");
    //if if statement consist of single line there is no need to put brakcets'{}'
}