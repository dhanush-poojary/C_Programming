#include<stdio.h>//To reverse an array within the specific index in an array
void reverse(int arr[],int i,int j){
  while(i<=j){//this function basically swapes or reverses a array within the certain index only if you want to reverse the entire array then set the i to 0 and then j to n-1 which is the size of the array
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }
  return ;//return / ends the fucntion
}
int main()
{
  int arr[7] = {1,2,3,4,5,6,7};//an initialized array
  int a,b;
  printf("\nThe array before the operation= ");
   for(int i=0;i<=6;i++){
    printf("\t%d",arr[i]);//prints the array
  }
  printf("\nEnter the index numbers to change:");
  scanf("%d %d",&a,&b);//these our starting and ending index of our reversing array
  reverse(arr,a,b);//passing array and index of it in the function reverse

  printf("\nThe array after the operation = ");
  for(int i=0;i<=6;i++){
    printf("\t%d",arr[i]);//prints the reversed array by the function reverse
  }
   return 0;
}