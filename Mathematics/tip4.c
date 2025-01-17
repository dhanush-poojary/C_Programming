#include <stdio.h>             //find the factorial of a number
int main()
{
  int i, n, temp; 
  int product = 1;

  printf("Enter the number to get factorial of it(n!): ");
  scanf("%d",&n);//user input of any midum range number bcz of int

//here the for loop goes decreamenting bcz factiorial also goes the same way so it starts from n and goes untill it equals 1
  for (i = n; i >= 1; i--)
  {
    temp = i; //putting value of i into temp , we have to multiply

//we can also print the factorials like below
    //  printf("%d X ",i);

//we,ve put 1 in product bcz we have to multiplay the entered number also
//multipling each i(number)with its decreamented i(number)
    product = product * temp;
  }
  printf("%d ", product);//printing the sum of factorial of n

  return 0;
}