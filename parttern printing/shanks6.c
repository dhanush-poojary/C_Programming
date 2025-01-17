#include<stdio.h>//To print alphabet pyramid mast pattern
int main(){        //using user input
  int n;
  printf("Enter the number of lines:");
  scanf("%d",&n);

//alphabet pyramid mast
//   A
//  ABA
// ABCBA
//ABCDCBA

  for(int a=1;a<=n;a++){ //this loop prints the line
    printf("\n");
    
    for(int b=1;b<=n-a;b++){//this loop prints spaces
      printf(" ");
    }
  
    for(int c=1;c<=a;c++){//this loop prints the alphabet
       char ch = (char)(c+64); //we
      printf("%c",ch);
          
    }
    int i = a - 1;//this is to print mast of alphabet if a is 1 then in line 1 , 0 alphabet will printed and in line 2 ,1 and so on
    for(int d=1;d<=a-1;d++){//we are runing till a-1 bcz in 1st line 0 and in 2nd line 1 and in 3rd line 2 times this will run and decreaments
      char ch = (char)(i+64); // it will add value of i to ch as it becomes 65 in line 2 and 66,65 in line 3 and so on
      printf("%c",ch);
      i--; //we are decreamenting the value of i as we need mast like bca or 321   
    }
   
  }
  return 0;
}