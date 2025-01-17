#include<stdio.h>  //To Reverse an array without using an extra array
void reverse(int arr[]){//this function reverses the array element from 1st index ele to last index ele of the array and last index ele to the 1st index elecontinue the process
  int i = 0,j=4;
   while(i<=j){//this runs till the size of array 

  //below is the same code but using for loop  
  // for(i=0,j=4;i<=j;i++,j--){

 //here we just used the swapping code to swap the last and first element of the array
    int temp = arr[i];//puts 1st element into temp
    arr[i] = arr[j];//puts last element into 1st element
    arr[j] = temp;//puts 1st element into last and so on repeats the process
    i++;//this is for going forward in the array
    j--;//this is for going backward in the array
  }
  return;//returns the array
}
int main(){
  int n=5;
  int arr[n];//array declaration
  printf("\nEnter the 5 array elements: ");
  for(int i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);//taking array as in user input
   }
   printf("\nThe Entered Array=\n");
   for(int j=0;j<n;j++){
     printf("\t%d",arr[j]);//prints the inputted array
   }
   reverse(arr);//passing an array to a function
   printf("\nThe Reversed Array=\n");
   for(int i=0;i<n;i++){
      printf("\t%d",arr[i]);//prints the final reversed array
   }
   return 0;
}