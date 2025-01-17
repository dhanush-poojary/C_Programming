#include<stdio.h>//To check the row which has more number of 1's
//example matrix
// 1       0       1       1
// 1       0       1       0
// 1       0       0       1
int main(){
  int arr[3][4] = {{1,0,1,1},{1,0,1,0},{1,0,0,1}};//initialized array
  int maxcount = 0,index;
  printf("\nThe array elements are = \n");
  for(int i=0;i<3;i++){
    printf("\n");
    for(int j=0;j<4;j++){
    printf("\t%d",arr[i][j]);//taking array elements as input
    }
  }
  //we are couting the each number of 1's in row 
  for(int i=0;i<3;i++){
     int count = 0;//we are checking each row so it is mandatory to initialize here 
    for(int j=0;j<4;j++){
      if(arr[i][j]==1) count++;//if the element in the row is 1 then increament the count
    }
    if(maxcount < count){//similarly store the count and the index of the row which has more number of 1's
      maxcount = count;
      index = i;
    }
  }
  printf("\nThe row number is %d has the maximum number of 1's",index);//prints the index of the row
  return 0;  
}