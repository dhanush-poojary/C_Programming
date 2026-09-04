#include<stdio.h>    //to find gcd of 2 numbers
                     //using functions
int min(int a,int b){//gcd is only till minmum of 2 numbers
  if(a<b) return a;
  else return b;
}
//gcd is gretest common divisor
int gcd(int a,int b){
  int HCF = 0;
   for(int i = min(a,b);i>=1;i--){
    if(a%i==0 && b%i==0){//if the number is divided by both the a and b then its a gcd of 2 numbers
      HCF = i;
      break;
    }
   }
   return HCF;
}
int main()
{  int a,b,hcf;
   printf("Enter 2 integers: ");
   scanf("%d %d",&a,&b);//user inputs
   hcf = gcd(a,b);//hcf and gcd means the same thing
   printf("The HCF of %d and %d is = %d",a,b,hcf);
    return 0;
}