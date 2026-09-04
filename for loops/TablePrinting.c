#include <stdio.h>               //table printing using for loop
int main()
{
  int x;
  printf("Enter the number to get the table of it: ");
  scanf("%d", &x);
//this is one method of printing a table

  // for (int i = 1; i <= 10; i++)
  // { //here starts from 1 and continues till 10 after the i'th value will be 11

  //   printf("\n%d X %d = %d", x, i, x * i);
  // }//just multipling x with i eg:- 6 * 1 = 1 / 6 * 0 = 0

//this is another method of printing a table
  for(int i = x; i <= x * 10; i = i + x)
  { //it starts as user inputs any number goes till x*10 means 2*10 = 20 
    //it will add 2 to i after everu ietration
    printf("%d ", i);//this will print the value of i all the time untill i<= X * 10
  }                 //means if x is 6 then when 60 = 60 it will end the for loop
  return 0;
}