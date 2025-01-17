#include<stdio.h>  //To print the rollno of student whose marks are lesser then 35
int main(){
  int marks[10] = {30,36,33,40,50,60,40,40,30,66};//initialization of an array
  printf("\nThe students whose marks are less then 35 are as follows = \n");
  for(int i=0;i<10;i++){ 
    if(marks[i]<35){ // checks if the element is <35 or not
      printf("\nRoll no = %d",i);//then prints its index value
    }
  }
  return 0 ;
}