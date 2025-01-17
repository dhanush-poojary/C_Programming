#include<stdio.h>//To find the pair of  elements(2) whose sum is equal to the x's value 
int main(){
  int arr[8] = {1,2,3,4,5,6,7,8};//an initialized array
  int count=0;
  int x = 12;//it is an userdefined value
  printf("The arry elements are:\n");
  for(int i=0;i<8;i++){
    printf("\t%d",arr[i]);//it prints the usual array elements as seperated by the tab spaces
    }
 //we used 2 loops bcz we are not repeating the pairs as(1,2) and (2,1) we are just checking first element in 1'th loop and in second loop we are chechking rest of the elements and so on
  for(int i=0;i<8;i++){
    for(int j=i+1;j<8;j++){
      if(arr[i]+arr[j] == x)//checks the sum of i'th and j'th loops is = x or not
      { printf("\n(%d,%d) = %d",arr[i],arr[j],arr[i]+arr[j]);//prints the specified pairs
        count++;//increaments the count of pair
      }
    }
  }
  printf("\nThe number of pair are = %d",count);//prints the count of pair which are equals to x's value
  return 0;
}