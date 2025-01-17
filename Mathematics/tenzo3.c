#include <stdio.h>   //To print power of each number until n terms
int main()
{
  int base, n, power = 1;//we set power to 1 bcz if we try to multiplay any number with 0 it will give 0 only

  printf("Enter the base and power: ");//user input of (base)raised to the (power)
  scanf("%d %d", &base, &n);

//if the base is 2 and power is 5
  for (int i = 1; i <= n; i++)//loop runs till 5
  {
    power = power * base; //here we are multipling base with power each time (5times),and storing it in the power itself
    //we are printing our each eitheration till n bcz we want the series to be printed of power number till n terms
    printf("\n%d to the power %d is = %d",base,i,power);
  }
  
  return 0;
}