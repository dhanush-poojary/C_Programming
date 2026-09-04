#include<stdio.h>  //To print pascals tringle pattern
                    //using ncr functions

// pascals tringle
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
//1 5 10 10 5 1

int factorial(int n){ //this function will calculates the factorial of each variables which is required by the ncr formula
  int fact=1;
    for(int i = 1;i<=n;i++){
      fact = fact * i;
    }
    return fact; //ended the funtion
}
int combi(int i,int j){
    int ncr; //we are calling the factorial function multiple times 
    return ncr = factorial(i)/(factorial(j)*factorial(i-j));
}
int main(){
  int n;
  printf("Enter the number of rows: ");
  scanf("%d",&n);
  //user input

  for(int i=0;i<=n;i++){ //we need to print 1 extra line n+1 times the loop will run
    printf("\n");
    for(int k=1;k<=n-i;k++) //this is to print the number of spaces
    {
      printf(" ");
    }
    for(int j=0;j<=i;j++){ //we want 1 extra value in the last so we are starting the loop with o as i'th loop
      int icj = combi(i,j); //called combi function with i and j
      printf("%d ",icj);
    }
  }  
  return 0;
}