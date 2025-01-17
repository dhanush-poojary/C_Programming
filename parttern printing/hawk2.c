#include<stdio.h>  //To print number table mast pattern
int main(){         //using user inputs
   int n,a=1;
   printf("Enter the number of lines:");
   scanf("%d",&n);//we are just printing the same number pattern but with space inbetween and opposite wise

//number table mast
//1234321
//123 321
//12   21
//1     1

   int nsp = 1;//number of spaces are computed with 2
   int nst = n-1;//we have to minus 1 bcz we had printed the first line before ..
   int ml = n/2+1;//we need the middle line which is the half +1 if 4/2+1 = 3

   for(int m=1;m<=2*n-1;m++){//the 1st line of number should always be *2 of n and - 1 is bcz we are only printing till 1234 and 321 which is 7 numbers not 8
    printf("%d",a);
    if(m<=ml){ //untill m becomes 4 we are adding 1 2 3 4
       a++;
    }
    else{ //after m becomes 4 we are substracting 3 2 1
      a--;
    }
   }
   printf("\n");//it is neccessary else afterwards things will messup

   for(int i=1;i<=n-1;i++){//for printing the lines
    int a = 1;//this is initialized in every eitration of i
    for(int j=1;j<=nst;j++){//for printing numbers
      printf("%d",a);
      a++;//it goes like 1 2 3 4
    }
    for(int k=1;k<=nsp;k++){//for printing the spaces
      printf(" ");
    }
    a--;//we are instead of writing it inside we had writted outside bcz we dont need to skip any number but we need after 3, 4-1=3 will be the next not 4
    for(int j=1;j<=nst;j++){//for printing numbers mirrior wise
      printf("%d",a);
     a--;//it goes like 123 321 and 12 21 and ..
    }
   nst--;//we are reducing the numbers in each line
    nsp +=2;//we are adding 2 spaces after each eiteration
    printf("\n");//prints in different line 
   }
  return 0;
}