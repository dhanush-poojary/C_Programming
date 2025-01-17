#include<stdio.h> //to find the sum of odd and even indices in an array and after the difference of the above(sod & soe)
int main(){
  int arr[6] = {1,3,5,7,9,11};//an initialized array with size 6
  int sum_of_even = 0,sum_of_odd = 0;//it is initilized to 0  bcz otherwise garbage value may be an issue
  printf("The arry before the operation:\n");
  for(int i=0;i<6;i++){
    printf("\t%d",arr[i]);//prints the array elements
 //after finding odd or even then adding it to corresponding sum variable   
    if(i%2==0){//this for checking even index
        sum_of_even+=arr[i];
    }
    else{ //this for checking odd index
      sum_of_odd+=arr[i]; 
    }
  }
  int diff_of_sum = sum_of_even - sum_of_odd;
  printf("\nThe Difference between the sum of even(%d) and odd(%d) indices are = %d",sum_of_even,sum_of_odd,diff_of_sum);//prints the result of the expression 
  
  return 0;
}