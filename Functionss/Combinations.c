#include<stdio.h>            //To calculate combinations  
                            //using functions
//we are created a function that calculates factorial of any number
int factorial(int x){
  int fact = 1; //in fact we are storing the factorial of that number
  for(int i = 2;i<=x;i++){
     fact = fact * i; //we are multiplaing as 1,2,4,5 by fact till n'th factorial occurres
  }
  return fact; //by returning we are getting out of this function
}
int main(){
  int N,R,ncr; //we will change n and r later

  printf("Enter n: ");
  scanf("%d",&N);
  printf("Enter r: ");
  scanf("%d",&R);
   //user input

  int n,r;
  n = factorial(N);//to get the factorial of n
  r = factorial(R);//to get the factorial of r
  int x = factorial(N-R);//to find the factorial of n-r

//this is our main formula of combination
  ncr = n/(r*x);//here the bracket is important else bodmans will be effected
  // //we can directly write the formula like this also
  // ncr = factorial(N)/(factorial(R)*factorial(N-R));
  printf("The NcR is = %d",ncr);
  return 0;
}