#include <stdio.h>                //printing even number up to 100 times
int main()
{  //we dont have to use i = i + 1 extra time that we were doing in c++
   // i++ , i+=1 , i = i + 1 these are same
  for (int i = 1; i <= 100; i++)
  {//if we remove <= and write only < then it will like 99 bcz 99 is <100 but not equal to 100
    if (i % 2 == 0)//this formula is to calculate even numbers
    {  //if we do like i%2!=0 then all odd numbers wil printed
      printf("%d ", i);
    }
  }
  return 0;
}