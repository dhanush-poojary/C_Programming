#include <stdio.h> //To print number and alphabet triangle pattern
int main()         // using user input
{
  int n;
  printf("Enter the number of lines: ");
  scanf("%d", &n); //user input

  //number and alphabet triangle
  //1
  //A B
  //1 2 3
  //A B C D
  //1 2 3 4 5

//here basically the  odd number rows are the number and even number rows are alphabet rows = i;

  for (int i = 1; i <= n; i++)//this loop prins number of rows
  {
    printf("\n");//prints at each eitheration

    //if we initialize a outside the for loop then we can print continues values like 65 66 67 68...n     
    int alpha = 65; //initializes a in each eitheration with 65 bcz A 's ASCII value is 65

    for (int j = 1; j <= i; j++) ////here insted of n we had taken i bcz we have to print i number of values in nth lines means 1st rows consist of 1 number ,and 2nd row consist of 2 alphabets..so on
    {
      if (i % 2 != 0) //here we are checking i is a odd number
        printf("%d ", j);// if i is odd then print j which is  1 if the i is 1 later i = 3 then j printed twise 1 3

      if (i % 2 == 0) //here we are checking i is a even number
      { // if i is even then print alpha which is  65(A). if the i is 2 later i = 4 then j printed 4 times A B C D
        printf("%c ", alpha); //prints alphabet 
        alpha++;//adds 1 to 65 in each eitheration of 2nd loop
      }
    }
  }
  return 0;
}