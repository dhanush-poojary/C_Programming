#include<stdio.h> //star path ways calculator using recursion
                  //using 3 max jumps
int steps(int n){
  //this function will be only for 3 max jumps to reach n'th step or last
  int ways;
  if(n==1 || n==2) return n;//base case
  if(n==3) return 4;//2nd base case is for 3max jumps bcz the no of ways are 4 not 3
  ways = steps(n-1) + steps(n-2) + steps(n-3);
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