#include <stdio.h>              //decreasing ap wihout maths
int main()                      //with float value
{
  int n;
  float ap = 100;//starting of the ap

  printf("Enter the number: ");
  scanf("%d", &n);//n terms user input
  //if we give input 10 ++)//normal loop
  //if gives output like 100 50 25 12.5.....
  
  for (int i = 1; i <= n; i++)
  {  printf("%.2f ", ap);//here we need only 2 floating point value 
    ap = (ap/2);//here we are diving ap by half bcz we have to print ap which is of 100 50 25 12.5 ...n     
  }
  return 0;
}