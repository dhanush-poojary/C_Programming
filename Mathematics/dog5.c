#include <stdio.h>//checking whether the point line on x(4,0) or y(0,4) axis origin   //(0,0)
int main()                                
{
  int x, y;//two point of graph
  printf("Enter the cordinates: ");
  scanf("%d %d", &x, &y);
  
  if (x == 0 && y == 0) //x and y are 0 means origin middle of graph
    printf("Lies on origin!");
   else if (x != 0 && y == 0) //(4,0) it is x-axis
    printf("lies on x-axis!");
   else if (x == 0 && y != 0) //(0,4) it is y-axis
    printf("lies on y-axis!");
  else //if we enter like(5,6) this else statement will be run
    printf("point does not lie on x nor y axis!!!!");
  return 0;
}