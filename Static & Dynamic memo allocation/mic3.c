#include<stdio.h>//creation of array without using array using dynamic memory allocation only in technical term
#include<stdlib.h>
int main(){
  int n = 10;//static memo allocation

//these are dynamic memory allocation and thier functions 
  int* ptr = (int*) malloc(n*sizeof(int));
  //int* ptr = (int*) calloc(10,sizeof(int));
 int* x = ptr;
 for(int i=1;i<=n;i++){
  scanf("%d",&(*ptr));//we can input pointers like this way
  ptr++;
 }
 for(int j=1;j<=n;j++){
  printf("\n%d",*x);
  x++;
 }
  // int* ptr = (int*)malloc(5*sizeof(int));
  // printf("%p",ptr);
  // free(ptr);
  // printf("\n%p",ptr);
  return 0;
}