#include<stdio.h>//Count Digits, Alphabets, Spaces and Special Characters in a String
#include<ctype.h>
int main(){
  char str[40];
  printf("Enter the string: ");
  gets(str);
  int num = 0,let = 0,sp = 0,sc = 0;
  for(int i=0;str[i]!='\0';i++){
      if(isalpha(str[i])>='a' && isalpha(str[i])<='z'){
      let+=1;
    }
    else if(str[i] == ' '){
      sp+=1;
    }
    else if(str[i] >= '0' && str[i]<= '9'){
      num+=1;
    }
    else{
      sc+=1;
    }
  
  }
  puts("The Enter string is = ");
  puts(str);
  printf("\nThe number of letters are = %d",let);
  printf("\nThe number of digits are = %d",num);
  printf("\nThe number of spaces are = %d",sp);
  printf("\nThe number of special character are = %d",sc);
  
  return 0;
}