#include<stdio.h>  //two pointers approach to find sum of pair is equal to a specific target value
int main(){
  int arr[] = {1,2,3,4,5,8,9,10};//applies to only sorted array and of n size
  int tar = 8;//our target value
  int i=0;//starting pointer
  int j=8;//ending pointer
  while(i<j){//this will run untill it reaches middle of the array
    if(arr[i]+arr[j]==tar){//if sum of any 2 numbers in a array is == 8 then it will be printed
      printf("%d & %d",arr[i],arr[j]);
      break;
    }
    else if(arr[i]+arr[j]>tar){//if the sum is greater the tar then j-- means we need lesser of sum
      j--;
    }
    else{//if the sum is greater then the tar then i++ means we need greater then sum
      i++;
    }
  }
 
  return 0;
}