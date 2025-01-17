#include<stdio.h> //To find the second largest element in an array
#include<limits.h>//provides some built in functions like INT_MIN and more
int main(){
  int arr[10];
  int max = INT_MIN; //we are intializing both with the lowest value available
  int sec_max = INT_MIN; 
  printf("Enter the elements : ");
  for(int i=0;i<10;i++){
    scanf("%d",&arr[i]);//user inputs of array elements
  }
  printf("\nThe array elements are = ");
   for(int i=0;i<10;i++){
    printf("\t%d",arr[i]);//printing of array elements
  }
  //*one method of doing it*//
  // for(int j = 0;j<10;j++){
  //   if(max<arr[j]){
  //      max = arr[j];
  //   } 
  // }
  // for(int j = 0;j<10;j++){
  //   if(sec_max < arr[j] && max!=arr[j])
  //   {
  //      sec_max = arr[j];
  //   }
  // }
  //*another method of doing it*//
  for(int i =0;i<10;i++){ //it works the same untill finding of maximum element code and then 
    if(max<arr[i]){
       sec_max = max;
       max = arr[i];
    }//here the sec_max holds second largest element itself and  it checks whether it is equal to max or not if not then it is the second largest element in an array
    else if(sec_max<arr[i] && max!=arr[i]){
         sec_max = arr[i];
    }
  }
  
  printf("\nThe second largest element = %d",sec_max);//prints the second largest element in an array
  return 0;
}