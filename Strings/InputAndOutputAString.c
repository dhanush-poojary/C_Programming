#include<stdio.h>//input and outputing of a string
int main(){
  char ch[5];//an character array declaration
  printf("Enter the string:");
  for(int i=0;i<5;i++){
  scanf("%c",&ch[i]);//it takes single character as input
  }
  printf("\n%c\n",ch[4]);//prints the character on the 4'th index
  for(int i=0;i<5;i++){
  printf("%c",ch[i]);//it prints single character at once
  }
  return 0;
}