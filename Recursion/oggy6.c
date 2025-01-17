#include<stdio.h>
void zigzag(int n){//receiced n as anarguement
  if(n==0) return ;//base case for this program which is the end of this function
  printf("%d ",n);
  zigzag(n-1);
  printf("%d ",n);
  zigzag(n-1);
  printf("%d ",n);
  return;
}
int main(){//we can also reffer to pip function code
  int n;
  printf("Enter the number:");
  scanf("%d",&n);//this is the number of ways to go pip
  zigzag(n);//passing an parameter
  return 0;
}