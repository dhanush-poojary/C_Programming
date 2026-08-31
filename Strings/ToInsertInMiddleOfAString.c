#include<stdio.h>//to insert an element into the middle of the element/ not replacing the element but adding/append
int main(){
  char str[10] = "college";// a character array/string
//basically we are inserting an element in the 3rd position of the string with out replacing it's positions
  for(int i = 6;i>=3;i--){
    //we are swaping from the last element to it's next index so the the 3rd index will become empty
     str[i+1] = str[i];//it will add last element of the string to it's next index untill 3rd index
     if(i == 3) str[i] = 'o';//in 3rd index we are appending the character 'o'
  }
  printf("%s",str);//printing of the string
  return 0;
}