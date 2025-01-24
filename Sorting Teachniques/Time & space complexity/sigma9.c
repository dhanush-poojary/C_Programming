#include<stdio.h>//To bring all 0's to the end of the array while maitaining the other elements relative or actual order
//this code is good in terms of time complexity which is O(n) but not in terms of space!
int main()
{  int arr[] = {5,0,2,0,0,4,1,3,0};//an array initialization
   int n = 9,idx = 0;//idx is for maintaining index
   int ans[n];//an array is declared of 9 size
  
   for(int i=0;i<n;i++){//here we are taking non-zero elements and storing it in another array in continues index we are not storing 0 will do it after wards
    if(arr[i]!=0){//this checks whether the array elements has non - zero element then store it in another array
      ans[idx] = arr[i];
      idx++;//we are storing in contineous manner index
    }
   }  
//after putting the non zero elements then we are storing zeros which is from last index value of non zero element to n-1 which is end of the array
   while(idx<n){
    ans[idx] = 0;
    idx++;
   }
   printf("\nThe resultant array= \n");
   for(int i=0;i<n;i++){
    printf("\t%d",ans[i]);//this will print the array after sending all the zeros back
   }
   return 0;
}