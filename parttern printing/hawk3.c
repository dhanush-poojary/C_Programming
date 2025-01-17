#include <stdio.h> //To print number zoom pattern
int main()
{                    // using user input
  int n;
  printf("Enter the number of rows: ");
  scanf("%d", &n);

  // number zoom
  // 1111111
  // 1222221
  // 1233321
  // 1234321
  // 1233321
  // 1222221
  // 1111111

  int min = 0;//we are using this to find minimum of 2 numbers
  for (int i = 1; i <= 2 * n - 1; i++) //we are print 2n-1 lines if 4 then 2*4-1 = 7 different lines
  {
    printf("\n");

    for (int j = 1; j <= 2 * n - 1; j++)//we are printing 2n-1 columns if 4 then 2*4-1 = 7 different columns
    {
      int a = i;
      if (a > n) //if i's value is greater then n we are substracting the sum of 2n-1 with i which is > then n
        a = 2 * n - i; // 8 - 5 is 3 and 8 - 6 is 2 and 8 - 7 is 1
      int b = j;
      if (b > n)//if j's value is greater then n we are substracting the sum of 2n-1 with j which is > then n
        b = 2 * n - j;// 8 - 5 is 3 and 8 - 6 is 2 and 8 - 7 is 1
//then we are calculating the minimum of 2 numbers a and b        
      if (a < b) //this will normally works till n'th value
        min = a; //if a is lesser then b then we are print a
      else
        min = b;//else we are printing b
      printf("%d", min);
    }
  }
  return 0;
}