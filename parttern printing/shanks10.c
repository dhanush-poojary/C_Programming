#include<stdio.h>  //To print number table pattern
int main(){        //using user inut
  int n;
  printf("Enter the numbers:");
  scanf("%d",&n);//we are just printing the same number pattern but with space inbetween and also continously

//number table  
//1234567
//123 567
//12   67
//1     7  

  int nsp = 1; //number of spaces are computed with 2
  int nst = n-1;//we have to minus 1 bcz we had printed the first line before ..

  for(int m=1;m<=2*n-1;m++){////the 1st line of number should always be *2 of n and - 1 is bcz we are only printing till 7 not 8
    printf("%d",m);
  }
  printf("\n");//it is neccessary else afterwards things will messup
  for(int i=1;i<=n-1;i++){//for printing the lines
    int a = 1;//this is initialized in every eitration of i
    for(int j=1;j<=nst;j++){//for printing numbers
      printf("%d",a);
      a++;//it goes like 1 2 3
    }
    for(int k=1;k<=nsp;k++){//for printing the spaces
      printf(" ");
      a++;//4 is skiped in 1st round.. and 3 4 5 in 2nd..
    }
    for(int j=1;j<=nst;j++){//for printing numbers continous wise
      printf("%d",a);
      a++;//it goes the continous wise of 123 567.. and 12 67..
    }
    nst--;//we are reducing the numbers in each line
    nsp +=2;//we are adding 2 spaces after each eiteration
    printf("\n");//prints in different line 
  }
  return 0;
}