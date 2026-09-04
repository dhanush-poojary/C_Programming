#include<stdio.h>     //To calculate permutations 
                     //using functions
//we are created a function that calculates factorial of any number
int factorial(int a){
   int fact=1;//in fact we are storing the factorial of that number
   for(int i=1;i<=a;i++){
     fact = fact * i;//we are multiplaing as 1,2,4,5 by fact till n'th factorial occurres
   }
   return fact; //by returning we are getting out of this function
}
int permutation(int n,int r){//we made a separate function that will calculates npr
  int npr = factorial(n)/factorial(n-r); //we are calling those function in the formula itself
  return npr;
}
int main(){
  int N,R,npr;//we will change n and r later

  printf("Enter n: ");
  scanf("%d",&N);
  printf("Enter r: ");
  scanf("%d",&R);
   //user input

  npr = permutation(N,R); //we had passed n and r so it will call permutation function then it will call inside that factorial function
  printf("\nThe npr = %d",npr);

}