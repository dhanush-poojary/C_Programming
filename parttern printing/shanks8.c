#include<stdio.h>  //To print star diamond pattern
int main(){        //using user input
  int n;
  printf("Enter the number of lines in odd number only:");
  scanf("%d",&n);

//star diamond
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *

 int nsp = n/2;//number of spaces if n is 7/2 = 3 then 3 spaces in 1st line 
 int nst = 1;//number of stars  increamenting or decreamenting it later
 int ml = n/2+1;//this is for middle line as odd number does not have a middle line so we are adding 1 and 7/2+1 = 4 is our middle line eg:- 3/2+1=2 i ml

  for(int i=1;i<=n;i++){ //for printing the lines only
    printf("\n");
    for(int j=1;j<=nsp;j++){//for printing the spaces only
      printf(" ");
    }

    for(int k=1;k<=nst;k++){ //for printing the stars
      printf("*");
    }
//if our middle value is less then i we are doing if bcz we are printing stars ascending and descending spaces but in the after the middle value we are ascending spaces with descending stars    
    if(i<ml){//this will print a pyramid untill half
      nsp-=1;
      nst+=2;
    }
    else{ //this will continue printing the pyramid upside down
      nsp+=1;
      nst-=2;
    }  
  } 
  return 0;
}