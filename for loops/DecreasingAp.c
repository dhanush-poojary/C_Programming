#include <stdio.h>                  //Decreasing Ap without maths
int main()                         // upto positive terms

{ //here no need to user input bcz of not given in question (n terms)

  int ap = 100; //this is the starting number of ap 
  //but here it is decreasing ap so we will substact the difference for example 100,97,94...
  //*************Important***************** */
  //until positive terms (means the last number should be 1)
  for (int i = 100; i >= 1; i--)//this is a decreasing for loop
  {   //it starts from 100 goes till 1
    printf("%d ", ap);
    ap = ap - 3;//minusing the defference 
    if (ap < 1)/*****Important**** */
      break;//when the ap became 1 it should break out of the loop bcz we need only positive values
}

// //another method of the same
//   int a = 100;
//   for(int i=1;a>=1;i++){
//     printf("%d ",a);
//     a = a - 3;
//   }
 
   
  return 0;
}