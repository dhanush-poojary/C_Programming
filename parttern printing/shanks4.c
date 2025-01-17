#include<stdio.h>//To print alphabet pyramid pattern
int main(){      //using user inputs
   int n;
   printf("Enter the number of lines :");
   scanf("%d",&n);

//alphabet pyramid
//   A
//  ABC
// ABCDE
//ABCDEFG
  
  int a = 1;//we are not inside initializing the variable as we need to increace the count after printing in a line
    for(int i=1;i<=n;i++){//this loop prints the line
     printf("\n");
     for(int k=1;k<=n-i;k++){//this loop prints spaces
      printf(" ");
     } 
     int d = 65; //we are intializing this in all ith eitherations
  char ch = (char) d; //typecasting int d to char ch
     for(int j=1;j<=a;j++){//this loop will print the alphabets
      printf("%c",ch);//we are printing character in each eitheration of j
      ch++;//adding 1 to 65
     }
     a+=2;//we are using a new variable to print the alphabets and add 2 in its next line's stars   
   }
   return 0;
}