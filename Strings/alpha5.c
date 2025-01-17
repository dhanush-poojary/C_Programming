#include<stdio.h>//Two techniques of copying the string into a another string
#include<string.h>
int main(){
  //shallow copy technique
  char str[] = "I am a legendary coder!";
  char *ptr = str; //here *ptr is the str it self it will be updated if we modify the str it is not a deep copy
  str[2] = ' ';//replacing the 2nd index to see *ptr will be modified or not
  printf("%s",ptr);

  //deep copy technique
  int size = 0;
  char str1[] = "college wallah is the best!";//an initialized string
  int i = 0;
  while(str1[i]!='\0'){ //here we are chechking the size of the string
    size++;
    i++;
  }
  char str2[size];//an declaration of another string with the size of str1 which is first string
  for(int k=0;k<size;k++)
  {
     str2[k] = str1[k];//it will copy the elements of first string to the another string in the same index's
  }
  puts(str2);//prints the copied string
  
  return 0;
}