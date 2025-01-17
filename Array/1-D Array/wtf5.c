#include<stdio.h>  //increamenting even indices by 10 and odd indices are multiplying by second multiple which is 2
int main(){
  int i,arr[10] = {1,2,3,4,5,6,7,8,9,10};//initialized array
  printf("The arry before the operation:\n");
  for(i=0;i<10;i++){
    printf("\t%d",arr[i]);//prints the elements of the array
    if(i%2==0){//this for checking even index
        arr[i]+=10;
    }
    else{ //this is for checking odd index
      arr[i]*=2; 
    }
  }
  printf("\nThe arry after the operation:\n");
  for(i=0;i<10;i++){
    printf("\t%d",arr[i]);//prints the elements of the array
  }
  return 0;
}