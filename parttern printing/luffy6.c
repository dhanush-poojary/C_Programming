#include<stdio.h>//To print Floyad's triangle (odd number)pattern
int main()         //using user inputs
{  int n;
   printf("Enter the number of lines: ");
   scanf("%d",&n);

 //Floyad's triangle (odd numbers)
 //1
 //3 5
 ///7 9 11
 //13 17 19

  int a = 1;//we are initializing a outside bcz we are updating it later not changing it /  we have to print it increamenting wise

   for(int i=1;i<=n;i++){//prints n number of rows
    printf("\n");
    for(int j=1;j<=i;j++){//here this loop runs as the value of i means if i is 1 then this loop wil run 1 times
      printf("%d ",a);//prints 1,3,5,7,9...
      a = a + 2;//here we are adding 2 insted of 1 to a bcz odd number consist of 2 differeces in between
    }
   }
    return 0;
}