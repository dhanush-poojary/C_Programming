#include<stdio.h>//selection sort
#include<limits.h>//in seclection sort we require smallest and largest integers to swap them with 1st index of unsorted array
int main(){
  int arr[] = {5,4,3,2,1};//un sorted array
  int n = 5;//size of an array
  printf("The array before sorting:\n");
  for(int i=0;i<n;i++){
    printf("\t%d",arr[i]);//array before sorting
  }
  for(int i=0;i<n-1;i++){//this loop is for number of passes that is n-1 in selection sort we are not making use of last elemet
    int min = INT_MAX;//setting min with largest integer value
    int minidx = 0;//this is for storing index of smallest element
//we ar reducing our array after each iteration of i'th loop from front
    for(int j=i;j<=n-1;j++){//here in this loop selection of smallest element and swapping it with 1st index of an unsorted array will be performed
                 //<n is also correct
      if(min>arr[j]){//this will find out minimum element in our unsorted array only
        min = arr[j];
        minidx = j;//this is the index of min element
      }
    }
    int temp = arr[minidx];//here we are just swapping smallest element with the first index of an sorted array
    arr[minidx] = arr[i];
    arr[i] = temp;
   }
  printf("\nThe array After sorting:\n");
  for(int i=0;i<n;i++){
    printf("\t%d",arr[i]);//array after sorting
  }
  return 0;
}