#include<stdio.h>//To find the missing element in the given range in an array
int main(){
 int arr[9] = {1,2,3,4,5,7,8,9,10};//an initialized array
 int sum = 0,sum2 = 0;//1st sum is for sum of array and another one is for the sum of given range
 for(int i=0;i<9;i++){
    sum+=arr[i];//for calculating the sum of array 
 }
 sum2 = 10*(10+1)/2;//this is for getting the sum of given range using this formula n*(n+1)/2
// we can find the missing element by minusing the sum of array with the sum of given range
 printf("\nThe %d'th element is not present",sum2-sum);//prints the missing element in the array
 return 0;
}