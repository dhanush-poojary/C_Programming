#include<stdio.h>//To create and open and input and print from and on to the file
int main(){
  FILE* ptr = fopen("Zoro.txt","w");//w is for creating file and r is for printing or writting something
  char str[100] = "bro college wallah is THE best"; //a normal string 
  fputs(str,ptr);//we are putting the string inside the text file 
  while(fgets(str,25,ptr)!=NULL)//if we use if instead of while then only first line will be printed in here
    printf("%s",str);
  fclose(ptr);//after manipulating files then close them it is necssary
  return 0;
}