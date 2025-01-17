#include<stdio.h> //string as pointers
int main(){
  char str[] = "dhanush coder";
//in normal initialization we can modify individual element but we can't modify the entire string at once
  // str = "dhanush gamer"; //error
  char *ptr = str;
//in pointer initialization we can modify entire string at once but we can't modify the individual element
  printf("%c\n",*ptr);
  ptr = "dhanush gamer";//with * we are making a new string and storing it in ptr  
  //ptr[0] = 'g'; //error
  printf("%s\n",str);//it will hold the first value itself
  
  while(*ptr!='\0'){
    printf("%c",*ptr);//it will print the newly modified string
    ptr++;//the pointer address can also be increamented or decreamented 
  }

  return 0;
}