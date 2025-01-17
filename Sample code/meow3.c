#include<stdio.h>                 //use of module operator
int main()
{ int a ,b ; //a should be > b
  printf("Enter the values of a and b: ");
  scanf("%d %d",&a,&b);
  //moudlo operator is used for returning reminder after division
  printf("The reminder is = %d",a%b);
  //if we divied something like 5/10 the reminder will be 5 only bcz of the small number in(a variable)
  return 0;

}