#include<stdio.h>//To search the Entered element in the array
#include<stdbool.h>//provides the usage of boolean datatypes in c program
int main(){
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};//an initialized array
  int x,index=0;
  bool flag = false; //this is a checker variable
  printf("Enter the search element:");
  scanf("%d",&x);//asking for search element with the user
  for(int i=0;i<10;i++){
    if(arr[i]==x){//compare with every element of the array 
      flag = true;//sets true if the element is present in the array
      index = i;//storing its index value in index variable

//////////*********important**************/////////////   
//if we remove break from this place we can make it to another question that of printing the index of search element if it is more then 1 like arr[4] = {1,2,2,2};   
      break;//this to check index of only 1st search element
      
    }
  }
  if(flag == false){//runs if array does not have the searched element
    printf("\nThe element %d is not present ",x);
  }
  else{//runs and provides the search elements index
    printf("\nThe element %d is present and its index is %d",x,index);
  }
  return 0;
}