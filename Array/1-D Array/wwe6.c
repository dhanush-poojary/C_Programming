#include<stdio.h>  //To find the duplicate element in an array
int main(){
  int arr[6] = {1,2,3,4,3,5};//an initialized array
  for(int i=0;i<=5;i++){ //this is for checking 1st element with the remaining
   for(int j=i+1;j<=5;j++){//this checks the remaining elements with the 1st 
    if(arr[i] == arr[j]){//if this finds the duplicate then print that element itself
      printf("\n%d is the duplicate element !",arr[i]);
      break;//then terminate the loop
    }
   }
  }  
  return 0;
}