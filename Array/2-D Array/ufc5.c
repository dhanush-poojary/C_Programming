#include<stdio.h> //To find out maximum and minimum element in an 2-D array
#include<limits.h>
int main()
{  int arr[2][4],sub1[2],sub2[2];
   int max = INT_MIN;//stores smallest value
   int min = INT_MAX;//stores largest value
   printf("Enter the array elements:");
   for(int i=0;i<2;i++){
    for(int j=0;j<4;j++){
      scanf("%d",&arr[i][j]);//inputs of array elements
    }
   }
   printf("\nThe elements of matrix are = ");
   for(int i=0;i<2;i++){
    printf("\n");
    for(int j=0;j<4;j++){
     printf("\t%d",arr[i][j]);//prints array element
    }
   }
   for(int i=0;i<2;i++){
    for(int j=0;j<4;j++){
      if(max<arr[i][j]){//cheching whether max is lesser then the element of matrix in each ietheration
        max = arr[i][j]; //stores the maximum value
        //there are 2 index's in 2-D array so we have to store in an sub array
        for(int k=0;k<1;k++){//there are 2 index i'th and j'th index
          sub1[k] = i ; 
          sub1[k+1] = j;
        }
        }
       if(min>arr[i][j]){//cheching whether min is greather then the element of matrix in each ietheration
        min = arr[i][j];//stores the minimum value
        //there are 2 index's in 2-D array so we have to store in an sub array
        for(int k=0;k<1;k++){//there are 2 index i'th and j'th index
          sub2[k] = i ; 
          sub2[k+1] = j;
        }
      }
    }
   }
  printf("\nThe maximum element in an matrix is = %d",max);//prints max ele
  printf("\nThe index of maximum element is = ");
  for(int k=0;k<2;k++)//prints its index
  printf("\t%d",sub1[k]);
  printf("\nThe minimum element in an matrix is = %d",min);//prints min ele
  printf("\nThe index of maximum element is = ");
  for(int k=0;k<2;k++)//prints its index
  printf("\t%d",sub2[k]);     
    return 0;
}