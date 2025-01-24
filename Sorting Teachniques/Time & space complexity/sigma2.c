#include<stdio.h>//optimazed code for finding of duplicate element in an array only of n terms
int main(){
  int arr[] = {1,5,4,3,7,9,8,6,2,7,10};//unsortted array upto n ele
  int sum1 = 0;//this is for sum of all array elements
  int sum2 = 0;//this is for sum of specific range
  for(int i=0;i<11;i++){
    sum1+=arr[i];
    sum2+=i;
  }
  //if we deduct sum1 which sum of all array ele and sum2 which is sum of specific range then we get the duplicate element for example  6 1 7 3 2 5 4 8 9 9 10 sum1 = 64
  //sum 2 = 55 then the ans  is  = 9
  printf("duplicate element = %d",sum1-sum2);
  return 0;
}