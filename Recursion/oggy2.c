#include<stdio.h>//To print power of a number using recursion
int power(int p,int b){             //in logatheramic method
  if(b==0) return 1;//base case which is anything to the power 0 is 1 itself
  int a = power(p,b/2);//b gets half until it becomes 0 or 1
  if(b%2==0){ //if it is even this expression will execute
    return a*a;//2*2
  }
  else{//if it is odd then this will be executed because 2/7 is 3 not 3.5 in pc so we are multipling the base again in odd expression
    return a*a*p;//1*1*3
  }
}
int main(){
  int a,b;
  printf("Enter the base and power :");
  scanf("%d %d",&a,&b);//user inputs
  int Pow = power(a,b);//function called with value 
  printf("The power is = %d",Pow);//printing of final result
  return 0;

}