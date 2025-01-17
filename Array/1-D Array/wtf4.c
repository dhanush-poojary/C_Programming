#include<stdio.h>  //passing an array to the function
void swap(int arr[]){//this will get array as an arguement
 //normal swapping function
  int temp = arr[0];
  arr[0] = arr[1];
  arr[1] = temp;
  return;
}
////////////////**important tip *///////////////////////////
//array is always passed by refference not by the value
int main(){
  int arr[2] = {2,5};//index are 0,1
  printf("Before swapping %d & %d",arr[0],arr[1]);
  swap(arr);//we just passed an array as a parameter
  printf("\nAfter swapping %d & %d",arr[0],arr[1]);//the final returned value by the swap function
  return 0;
}