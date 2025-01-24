#include<stdio.h>//insertion sort
//in insertion sort we insert an element in it's correct position from last bcz we will assume first index is already sorted that's way it starts from i=1;
int main(){
  int arr[] = {5,4,3,2,1};//an non-increasing /un sorted array
  int n = 5;//size of an array
   printf("\nThe array before soriting= \n");
  for(int i=0;i<n;i++){
    printf("\t%d",arr[i]);//array before sorting
  }
  for(int i=1;i<=n-1;i++){//this loop is for the no of passes in case insertion sort is is n-1 ,but in this sorting we are sorting from back and bringing smallest element to front 
               //j<n is also correct way
    int j=i;//this is for making array short from the front or sorted part
    while(j>=1 && arr[j]<arr[j-1]){//we are checking whether our current element is < lesser then our last element of sorted part and then replacing it

 //j>=1 is for if our current element is lesser then 0'th index which is non existence in here so to avoid error we used that   
      int temp = arr[j];//then swap the current element with last element which is j-1 if it is greater then only
      arr[j] = arr[j-1];
      arr[j-1] = temp;
      j--;//bcz of while loop in insertion sort we dont know the number of passes so we used while loop
    }
  }
  printf("\nThe array after soriting= \n");
  for(int i=0;i<n;i++){
    printf("\t%d",arr[i]);//array after sorting
  }
  return 0;
}