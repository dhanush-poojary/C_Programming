#include<stdio.h>//methods of inputs and outputs of strings
#include<string.h>//provides formate specifier %s
int main(){
  char str[20];//character array declaration
  //first method
  printf("Enter the string: ");
  //scanf("%s",str);  //it will only consider first word
  scanf("%[^\n]s",str);//it will work as alternative to gets
  printf("\n%s",str);//prints the entire string
  //second method
  printf("Enter the string: ");
  gets(str);//takes an string as input
  puts(str);//this will automatically give \n unlike printf
  return 0;
}
