#include<stdio.h>//To print number pyramid mast pattern
int main(){      //using user inputs
   int n;
   printf("Enter the number of lines :");
   scanf("%d",&n);
 
//number pyramid mast
//   1
//  121
// 12321
//1234321

  int g = 1;//we are not inside initializing the variable as we need to increace the count after printing in a line
  
   for(int a=1;a<=n;a++){ //this loop prints the line
     printf("\n");
    
     for(int b=1;b<=n-a;b++){//this loop prints spaces
      printf(" ");
     } 
     for(int c=1;c<=a;c++){//this loop prints the numbers
      printf("%d",c);//instead of stars we are print the value of c itself
     }
      int i = a - 1;//using this i we are makung a mast of 321
     for(int d=1;d<=a-1;d++){ //we are runing till a-1 bcz in 1st line 0 and in 2nd line 1 and in 3rd line 2 times this will run and decreaments
      printf("%d",i);
      i--; //we have to print like 12321 so we are decreamenting
    }
     g+=2;//we are using a new variable to print the alphabets and add 2 in its next line's stars 
   }
   return 0;
}