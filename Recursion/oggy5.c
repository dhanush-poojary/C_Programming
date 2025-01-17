#include<stdio.h>
void preinpost(int n){//receiced n as anarguement
  if(n==0) return ;//base case for this program which is the end of this function
  printf("Pre %d\n",n);
  preinpost(n-1);
  printf("In %d\n",n);
  preinpost(n-1);
  printf("Post %d\n",n);
  return;
}
int main(){
  int n;
  printf("Enter the number:");
  scanf("%d",&n);//this is the number of ways to go pip
  preinpost(n);//passing an parameter
  return 0;
}