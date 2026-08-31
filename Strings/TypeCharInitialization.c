#include<stdio.h> //types of character array initialization
int main(){
  char ch[] = {'h','e','l','l','o'};//here compiler will automatically inserts the size but will not put '\o'at the end
  char str[] = "hello";//here the size will be size +1 which is for '\o' which is automatically added by compiler 5+1= 6
  for(int i=0;i<5;i++){
    printf("%c",ch[i]);//it prints single character at once
  }
  printf("\n\n");
   for(int i=0;str[i]!='\0';i++){
    printf("%c",ch[i]);//it also prints single character at once but condition will be different 
  }
}