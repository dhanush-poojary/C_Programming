#include<stdio.h>//To find the unique element in an array . where the remaining elements are repeated and this is not 
#include<stdbool.h>
int main(){
  int arr[7] = {1,2,3,2,1,2};//an initialized array
  for(int i=0;i<=6;i++){//this is for checking 1st element with the remaining
    bool checker = false;//we are assuming every element in an array as unique in the first
   for(int j=i+1;j<=6;j++){//this checks the remaining elements with the 1st 
    if(arr[i] == arr[j]){//this will cause the chechker variable to store true in it if it finds a duplicate element
      checker = true;
    }
   }
   if(checker ==false){//if it does not find any duplicate of element then i itself is a unique element
    printf("\n%d is an unique element!",arr[i]);
    break;//print then terminate out of the loop
   }
  }
  return 0;
}