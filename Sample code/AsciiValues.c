#include<stdio.h>  //to print all the english alphabets A --> Z and a --> z and to print corrensponding ANSCII VALUES
int main()
{  int small= 97,big=65; //this is bcz small letter in ASCII starts from 97 and big are from 65
   int i = 1;//loop start 
   printf("SMALL LETTERS\t ASCII VALUES\t BIG LETTERS\t ASCII VALUES");
   while(i <=26){ //our loop goes till 26 eitheration asthough english contains 26 alphabets
       //here we are type casting intger into character as we want to pprint alphabets and their corresponding ASCII values
    printf("\n%c\t\t   %d\t\t   %c\t\t   %d",small,small,big,big);
    small += 1; //increaments small by 1
    big += 1; //increaments big by 1
    i += 1; //increaments i by 1
    //these three untill 26
   }  
    return 0;
}