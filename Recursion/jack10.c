#include<stdio.h> //star path ways calculator using recursion
                  //using 2 max jumps
int steps(int n){
//this function will be only for 2 max jumps to reach n'th step or last
  int ways;
  if(n==1 || n==2) return n;//base case
  ways = steps(n-1) + steps(n-2) ;
  return ways;
}
int main(){
  int n;
  printf("Enter the number of steps: ");
  scanf("%d",&n);//user input
  int noways = steps(n);//storing step functions returned value in noways
  printf("\nThe number of ways to get down of a stair = %d",noways);//prints the number of ways to walk on a stair 
  return 0;
}