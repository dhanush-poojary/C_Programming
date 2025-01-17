#include<stdio.h>//To print the decreamenting number from n to 1 using recursion
                //without using any kind of loops
int decreamentation(n){
  //when n becomes 0 our loop ends
  if(n==0) return;//this is a base case :- means end of the loop or end of recursive calling
  else{
      printf("\n%d",n);
      //returns n-1'th decreamentation until n becomes 0
     return decreamentation(n-1);//recursive call and it works\calls unlimited time until the base case hits 
  }
 
}
int main(){
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);//user input
  decreamentation(n);//once called a decreamenting function
  return 0;
}
