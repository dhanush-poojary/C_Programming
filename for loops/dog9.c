#include <stdio.h>            //Geomatric progression(GP)
int main()                    //without maths
{
  int n;
  printf("Enter the number :");
  scanf("%d", &n);//user input's the n terms (end of loop)

  int gp = 3;//start of gp
  //gp means multipling the difference for example 3,12,48...
  //here the difference 4 numbers

  for (int i = 1; i <= n; i++)//this will run untill n numbers
  {
    printf("%d ",gp);
    gp = gp * 4;//this will multiply th gp by 4 untill it reches end of for loop that is 'i <=n'
  }
 
  return 0;
}

