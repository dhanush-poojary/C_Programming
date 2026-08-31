#include <stdio.h>           //program to get greatest of 4 numbers
int main()
{
  int a, b, c, d;
  //user input of 4
  printf("\nEnter four numbers: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);
  //if a greater then b and c and d it means a is greatest
  if (a > b && a > c && a > d)
  {
    printf("A is greatest");
  } //if b greater then a and c and d it means b is greatest
  else if (b > a && b > c && b > d)
  {
    printf("B is greatest");
  } //if c greater then b and c and d it means a is greatest
  else if (c > b && c > a && c > d)
  {
    printf("C is greatest");
  }
  else//finally if the above conditions are false the d is greatest
  {
    printf("D is greatest");
  }
}