#include<stdio.h>//basic 1-D array operation
int main()
{  int num[25];//array declaration
   int n = 5;//size of the array
   printf("Enter %d array elements: ",n);
   for(int i=0;i<n;i++){
    scanf("%d",&num[i]);//taking input of array elements
   }
   for(int i=0;i<n;i++){
    printf("%d ",num[i]);//printing of array element in verticle order
   }
    return 0;
}