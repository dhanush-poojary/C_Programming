#include<stdio.h>
#include<string.h>//provides formate specifier %s
int main(){
  char str[20];//character array declaration
  //first method
  printf("Enter the string: ");
  scanf("%[^\n]s",str);//inputing an string
  int k = 0,size = 0;
  while(str[k]!='\0'){//this will compute the size of our entered string not the str's size which is 20
    size++;
    k++;
  }
  for(int i=0,j=size-1;i<=j;i++,j--){//this will reverse the each string character like 1-D array
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
  puts("\nThe Reversed string: ");
  puts(str);//prints the resultant string
  return 0;
}