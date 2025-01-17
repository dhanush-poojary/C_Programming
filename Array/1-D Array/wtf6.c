#include<stdio.h>  //To count the elements of the array whose value is greather then x's value
int main(){
  int arr[7] = {1,2,3,4,5,6,7};//an initialized array
  int x = 4,count=0;//x is userdefined value
  for(int i = 0;i<7;i++){//the size of array is 7 so the loop runs 7 times 0 to 6
    if(arr[i]>x){//this will check whether the element of an array is greater then x's value or not 
      count++;//increaments count by 1
    }
  }
  printf("\nThe %d elements are greather then %d",count,x);//prints  the result
  return 0;
}