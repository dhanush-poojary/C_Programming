#include<stdio.h>//selection sort in decreasing order
#include<limits.h>//in seclection sort we require smallest and largest integers to swap them with 1st index of unsorted array
int main(){
  int arr[] = {1,2,3,4,5};//non-decresing /unsorted array
  int n = 5;//size of an array
  printf("The array before sorting:\n");
  for(int i=0;i<n;i++){
    printf("\t%d",arr[i]);//array before sorting
  }
  for(int i=0;i<n-1;i++){//this loop is for number of passes that is n-1 in selection sort we are not making use of last elemet
    int max = INT_MIN;//setting max with smallest integer value
    int maxidx = 0;//this is for storing index of largest element
//we ar reducing our array after each iteration of i'th loop from front
    for(int j=i;j<=n-1;j++){//here in this loop selection of largest element and swapping it with 1st index of an unsorted array will be performed
                 //<n is also correct
      if(max<arr[j]){//this will find out maximum element in our unsorted array only
        max = arr[j];
        maxidx = j;//this is the index of max element
      }
    }
    int temp = arr[maxidx];//here we are just swapping largest element with the first index of an sorted array
    arr[maxidx] = arr[i];
    arr[i] = temp;
   }
  printf("\nThe array After sorting:\n");
  for(int i=0;i<n;i++){
    printf("\t%d",arr[i]);//array after sorting
  }
  return 0;
}