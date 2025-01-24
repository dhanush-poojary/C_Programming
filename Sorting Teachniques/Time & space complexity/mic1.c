#include<stdio.h>//to find the k'th last index in an array where k is user's choice
#include<limits.h>
int main(){
  int arr[] = {5,2,4,1,3,6};//unsorted array
  int n = 6;
  int k = 3;
//we are making use of selcetion sort algorithm to find minimum element  bcz in each pass we will get our that number of lagest element in the back side
  for(int i=0;i<=k;i++){//we only need k number of passes we are not sorting the entire array we are just sorting k steps to get k'th largest element
    int min = INT_MAX;
    int minidx = 0;
    for(int j=i;j<=n-1;j++){//selection sort code
      if(min>arr[j]){
        min = arr[j];
        minidx = j;
      }
    }
    int temp = arr[minidx];
    arr[minidx] = arr[i];
    arr[i] = temp;
   }
  // printf("\nThe array after soriting= \n");
  // for(int i=0;i<n;i++){
  //   printf("\t%d",arr[i]);
  // }
  printf("\nThe %d'th largest element is = %d",k,arr[n-k]);//printing of k'th largest element
  return 0;
}