#include<stdio.h>  //To print star triangle upside down
int main()        //using user input
{ int n;
   printf("Enter the number of lines: ");
   scanf("%d",&n);
  
  //star triangle upside down
  //* * * *
  //* * *
  //* *
  //* 
 //so here we have to print down words means we have to use decreamenting for loop
   for(int i=n;i>=1;i--){// it will start from n and goes till 1
    printf("\n"); // prints n no of lines
    for(int j=1;j<=i;j++){ //if the  i is 5 then it will print 5 then i becomes 4 it will print 4 stars and then it becomes 3..till n star
      printf("* ");
    }
   }
   //another method of doing it
  //  for(int i=1;i<=n;i++){
  //    printf("\n");
  //    for(int j=1;j<=n+1-i;j++){ // here we are adding 1 to n bcz we have to print the n also if n is 5 so we have to print 5 in 1st eitheration  then -1 is to reduce each stars line by line
  //      printf("* ");
  //    }
  //  }

    return 0;
}