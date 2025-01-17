#include<stdio.h>  //To swap using functions using pointers
void swap(int* x, int* y);//function prototype which is to represent here
int main(){
  int a = 5,b = 6;
   
  swap(&a,&b); //function call
  printf("a = %d\t",a);
  printf("b = %d",b);  
  return 0;

}
void swap(int* x, int* y){
  //using third variable
  // int temp;
  // temp = *x;
  // *x = *y;
  // *y = temp;
//without using third variable
  *x = *x + *y;
  *y = *x - *y;
  *x = *x - *y;
  return;
}