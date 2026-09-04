#include <stdio.h>            //Arithematic progression(AP)
int main()                    //without maths
{
  int n;
  printf("Enter the number :");
  scanf("%d", &n);//user input's the n terms (end of loop)

  int ap = 3;//start of ap 
  //ap means adding the difference for example 4,7,10,13,16,19...
  //here the difference is 3 numbers
  for (int i = 1; i <= n; i++)//this will run untill n numbers
  {
    printf("%d ",ap);
    ap = ap + 3;//it add 3 to the starting number that is 3
  }
 
  return 0;
}

