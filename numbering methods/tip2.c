#include <stdio.h>         //To print prime numbers upto n terms
int main()
{
  int n, i, x;
  int prime; //this variable will decide wheather the number is prime or not

  printf("Enter the range for which you want the prime numbers:");
  scanf("%d", &n);//user input of n terms

  for (i = 2; i < n; i++) //starts from 2 goes till n-1
  {//here we initialize 1 to prime(var) in each ietheration of (i),means for all numbers it assumes as prime
    prime = 1;
  for (x = 2; x<=i/2; x++)//if the value of x < or == to the i/2 means 4/2 == 2 thats == 2 == x; so it enters the loop
    {
      if (i % x == 0) //here if i gets devided easily by any number then it is not a prime number , eg:- 4%2==0 is true
      {
        prime = 0;//it will assume as the number is not a prime number
        break; //then breakes out off (second loop only)then repeats the process
      }
    }
    if (prime)//any value other then 0 is considered as true so it becomes prime or else this if will be skipped in this eitheration
      printf("%d ", i);
  }
  return 0;
}