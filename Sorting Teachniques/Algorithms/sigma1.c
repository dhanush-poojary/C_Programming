#include<stdio.h>//bubble sort
#include<stdbool.h>//only in case of optimizing bubble sort we used bool so that max no of operation can be reduced
int main()
{  int arr[5] = {5,4,3,2,1};//an sorted array 
   int n = 5;//size or number of element
  printf("\nThe sorted are is = \n");
  for(int i=0;i<n;i++){
   printf("\t%d",arr[i]);//array before sorting
  }
   for(int i=0;i<n-1;i++){//this is for number of passes
      bool checker = true;//this is for checking if the array is already sorted or not if the array is full sorting in the first place then also 1 time the 2nd loop will run
    //we ar reducing our array after each iteration of i'th loop from back
       for(int j=0;j<=n-2-i;j++){//this will perform number of swaps only if out of 2 element if first one is greater then second element then swap otherwise dont swap them
                    //<n-1-i is also correct way  
         if(arr[j]>arr[j+1]){//only if 1st ele is greater then 2nd ele then swap them
          int temp = arr[j];//swap them
          arr[j] = arr[j+1];
          arr[j+1] = temp;
          checker = false;//if any element will be swapped then it means array is not sorted
         }
       }
       if(checker == true) break;//if no swapes performed that means the array is sorted and break out of the loop
   } 
   printf("\nThe sorted are is = \n");
   for(int i=0;i<n;i++){
    printf("\t%d",arr[i]);//array after sorting
   }
    return 0;
}