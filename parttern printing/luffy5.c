#include<stdio.h>  //To print Floyad's triangle pattern
int main()         //using user inputs
{  int n;
   printf("Enter the number of lines: ");
   scanf("%d",&n);

//Floyad's triangle
 //1
 //2 3
 ///4 5 6
 //7 8 9 10

  int a = 1;//we are initializing a outside bcz we are updating it later not changing it /  we have to print it increamenting wise

   for(int i=1;i<=n;i++){//prints n number of rows
    printf("\n");
    for(int j=1;j<=i;j++){//here this loop runs as the value of i means if i is 1 then this loop wil run 1 times
      printf("%d ",a);//prints 1,2,3,4,5,6
      a++; //adds  1 to a
    }
   }
    return 0;
}