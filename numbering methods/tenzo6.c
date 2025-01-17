#include<stdio.h>  //To print whether the entered number is a palindrome or not
int main(){
  int x,rev=0,copy,ld;
  
 printf("Please enter a number: ");
 scanf("%d",&x);//user input like 3 number(121) more also possible
 copy = x;//made a copy of x to compare it in the last if else block
 while(x!=0){//when x becomes 0 while loop stopes
    ld = x%10; //storing last digit of x in ld
    rev = rev * 10 + ld; //adding all the last digits in rev variable
    x = x/10;//cutting all the last digits of x till it becomes 0
 }
 if(copy == rev){ //comparing the entered and the reversed number
  printf("\nThe enterd numer (%d) is a Palindrome",rev);//true block
 }
 else{
   printf("\nThe entered number (%d) is not a palindrome",copy);//false block
 }
}
