#include<stdio.h>            //printing odd numbers using continue
int main()
{  int n;
   
   //this for loop runs from 1 to 100
   for(int i = 1;i<=100;i++){ //if we make it != then it print even numbers
     if(i % 2 == 0) continue;//here the if ends
     printf("%d ",i);//continue will skip the eitheration
   }
   return 0;

}