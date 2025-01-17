#include <stdio.h>                //find the factorial of a number
int main()
{
  int i, n, temp; 
  int product = 1;

  printf("Enter the number to get factorial of it(n!): ");
  scanf("%d",&n);//user input of any midum range number bcz of int

//here the for loop goes increamenting bcz factiorial can also go like 1 X 2 X 3X.. way so it starts from 1 and goes untill n
  for (i = 1; i<= n; i++)
   {//not neccesary
    temp = i; //putting value of i into temp , we have to multiply

//we,ve put 1 in product bcz we have to multiplay the entered number also
//multipling each i(number)with its increamented i(number)
    product = product * temp;
    printf("\nThe factorial of %d is = %d",i, product);//printing the factorial of each number until ..X 1
  }
 
  return 0;
}