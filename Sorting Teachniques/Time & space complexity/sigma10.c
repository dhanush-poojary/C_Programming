#include<stdio.h>//To bring all 0's to the end of the array while maitaining the other elements relative or actual order
//this is good code interms of space complexity as well as time complexity
int main(){
  int arr[] = {5,0,2,0,0,4,1,3,0};//an array initialization
  int n = 9;//here we are not making use of another array and also index
  for(int i=0;i<n;i++){//we used bubble sort algorithmn
    for(int j=0;j<=n-2-i;j++){
        if(arr[j]==0){//in this we are only swapping 0 that's way the 0 will pushed to back size in each iteration of i'th loop
          int temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] =temp;
        }
    }
  }
  printf("\nThe array elements after operation=\n");
  for(int i=0;i<n;i++){
  printf("\t%d",arr[i]);//printing of resultant array after pushing all zeros to end
  }
}