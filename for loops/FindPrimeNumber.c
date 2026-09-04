#include <stdio.h>              //To find out number is a prime
int main()
{//the number which cannot be divisible by 1 and the number it self is a prime number
  int x;
  int a;
  printf("Enter a number: ");
  scanf("%d", &x);//only natural number(positive)
  //basically 1 is not both composite or prime

  //*******important******* */
  //so we start the loop with 2 and for prime number we put n-1(x-1)
  for (int i = 2; i <= x - 1; i++)
  {                        
    if (x % i == 0) // we are dividing x with i means from 2 to n-1 times 
    {
      a = 0;//we are storing so because  we have to see prime also
      break;//if the x is divisible by any number the loop terminates
    }
  }
  if (x == 1)//only if we enter 1
    printf("1 is neither Prime nor composite number!");
  else if (a == 0)//if number is divided by 2 then it will execute
  {
    printf("Composite number!");
  }
  else//if we enter 2 and any number that will not divided by any number number then this will run
  {
    printf("Prime number!");
  }
  return 0;
}