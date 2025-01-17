#include<stdio.h>  //To print number triangle upside down
int main()        //using user input
{ int n;
   printf("Enter the number of lines: ");
   scanf("%d",&n); //user input
//number triangle upside down
  //1234
  //123
  //12
  //1
   for(int i=1;i<=n;i++){ //runs till i<=n if n is 5 then it will print 5 lines
    printf("\n");
    for(int j=1;j<=n+1-i;j++){ //here we are adding 1 to n bcz we have to print 5numbers(1 2 3 4 4 )in first line we dont put it then (1 2 3 4 )will be printed bcz we have to print decreamenting wise so we had used -i it will -i from n in each line
      printf("%d",j); //prints jth value in each line from 1 ..to n
    }
   }
   return 0;
}