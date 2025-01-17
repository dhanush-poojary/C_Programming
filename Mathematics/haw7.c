#include<stdio.h>  //To calculate combinations
int main(){        //using maths formula ncr = n!/r!(n-r)!
  int N,R,ncr; //we will change n and r later

  printf("Enter n: ");
  scanf("%d",&N);
  printf("Enter r: ");
  scanf("%d",&R);
  //user input

  int n=1,r=1; //we need to multiplay so we are putting 1 in both
  for(int i = 2;i<=N;i++){
    n = n * i; //to find the factorial of n
  }
  for(int j=2;j<=R;j++){
    r = r * j; //to find the factorial of r
  }
  int x,y=1; //y is for n-r!
  x = N - R; // we are minusing n by r and store the value in x
  for(int i=2;i<=x;i++){
    y = y * i; //to find the factorial of n-r
  }
  //this is our main formula of combination
  ncr = n/(r*y); //here the bracket is important else bodmans will be effected
  printf("The NcR is = %d",ncr);
  
  return 0;
}