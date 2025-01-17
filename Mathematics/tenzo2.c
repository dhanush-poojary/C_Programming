#include <stdio.h> //To print the Power of entered number
int main()
{
  int a, b, power = 1;//we set power to 1 bcz if we try to multiplay any number with 0 it will give 0 only

  printf("Enter the base and power: ");
  scanf("%d %d", &a, &b);//user input of (base)raised to the (power)
  //if the base is 2 and power is 5
  for (int i = 1; i <= b; i++) //loop runs till 5
  {
    power = power * a; //here we are multipling base with power each time (5times),and storing it in the power itself
  }
  //after all the calculation we have to print the final result
  printf("\n%d to the power %d is = %d",a,b,power);
  return 0;
}