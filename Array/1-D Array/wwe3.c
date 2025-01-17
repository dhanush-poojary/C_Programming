#include<stdio.h>  //To check the array whether it is a palindrome or not
#include<stdlib.h>//this is for exit()function
int reverse(int arr[]){//receiving an array as an parameter
  int i = 0,j=3;
   while(i<=j){ //runs untill size of the array
    //we are just checking the 1st element is same as the last element or not and also doing the same for remaining elements
    if(arr[i] == arr[j-i]){
        i++;//for checking from beginning
        j--;//for checking form ending
     }
     else{//if any element of the array does not matches then this block of code will be executed
      printf("\nThe Entered array is not a palindrome!");
      exit(0); //exits out of the entire program
     }
  }
  return 1;//this is to specific that the array is a palindrome
}
int main(){
  int n=4;
  int arr[n];//array declaration
  printf("\nEnter the 4 array elements: ");
  for(int i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);//array user input
   }
   printf("\nThe Entered Array=\n");
   for(int j=0;j<n;j++){
     printf("\t%d",arr[j]);//prints the entered array
   }
  if(reverse(arr)){//this will only run if the function returns 1 which is, it is a palindrome array
    printf("\nThe Entered array is a palindrome");
  }   
   return 0;
}