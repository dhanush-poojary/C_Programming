#include<stdio.h>//To Rotate an array within the k steps , where the condtion k can be greather then n-1(size of array)
void reverse(int arr[],int i,int j){
  while(i<=j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }
  return ;
}
//we are swapping the last k elements to front i elements and then performing the rotation like below
//arr[7] = {1,2,3,4,5,6,7} = {5,6,7,1,2,3,4}
int main()
{   int k = 3,n = 7 ;  //k can be greater then n if k==n then the array is the same
    int arr[7] = {1,2,3,4,5,6,7};//an initialized array
   
  printf("\nThe array before the operation= ");
   for(int i=0;i<=6;i++){
    printf("\t%d",arr[i]);//prints the array
  }
  if(k>n);//we are not making many steps of doing the same rotations so we used remainder of it 
   k = k%n;//if it is K>n then only the remainder value is going to rotate which is k steps
  reverse(arr,0,n-1);//reverses the entire array
  reverse(arr,0,k-1);//reverses the first k elements
  reverse(arr,k,n-1);//reverses the remaining elements 

  printf("\nThe array after the operation = ");
  for(int i=0;i<=6;i++){
    printf("\t%d",arr[i]);//prints the final array 
  }
   
}