#include<stdio.h> //usage of string builtin functions
#include<string.h>
int main(){
  //in the strcat function it will require 2nd strings size too so it is added into the first string itself
  char str1[38+34] = "The best thing in the world is coding";
  int x = strlen(str1);//it will provide the count of only characters in the string not the size of the string
  printf("%d\n",x);
  
  char str2[34] = " and software engineering as well";
  strcat(str1,str2);//it will join the str1 and str2 together at the end of str1 to make str1 as a new long string
  printf("%s\n",str1);//that's way it will require str1 to have also the size of str2

  char st1[12] = "hello world";
  char st2[12];
  strcpy(st2,st1);//it will copy str1 into str2 so the str1 and str2 now holds the same string value
  printf("\n%s\n",st2);

  printf("\n%s",strrev(st1));//it will reverse the entire string elements

  return 0;
}