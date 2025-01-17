#include<stdio.h>//To print alhabet table pattern
int main(){      //using user input
   int n,ch=65;
   printf("Enter the number of lines: ");
   scanf("%d",&n);

//alhabet table 
//ABCDEFG
//ABC EFG
//AB   FG
//A     G

  int nst = n-1;//we have to minus 1 bcz we had printed the first line before ..
  int nsp = 1;//number of spaces are computed with 2

  for(int m=1;m<=2*n-1;m++){////the 1st line of number should always be *2 of n and - 1 is bcz we are only printing till 7 is g not  8 is h
    printf("%c",ch);//prints alhabet 
    ch++;
  }
  printf("\n");//it is neccessary else afterwards things will messup
   for(int i=1;i<=n-1;i++){//for printing the lines
    int ch = 65;//this is initialized in every eitration of i 
      for(int j=1;j<=nst;j++){//for printing alhabets
        printf("%c",ch);
        ch++;//it goes like A B C
      }
      for(int k=1;k<=nsp;k++){//for printing the spaces
         printf(" ");
         ch++;//D is skiped in 1st round and C D E in 2nd..
      }
      for(int j=1;j<=nst;j++){//for printing alhabets continous wise
        printf("%c",ch);
        ch++;//it goes the continous wise ABC EFG and..
      }
      nst--;//we are reducing the numbers in each line
    nsp +=2;//we are adding 2 spaces after each eiteration
    printf("\n");//prints in different line 
   }

}