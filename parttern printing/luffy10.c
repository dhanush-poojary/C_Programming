#include<stdio.h> //To print Alphabet triangle mast pattern
int main(){       //using user input
  int n;
  printf("Enter the number of lines:");
  scanf("%d",&n);

///Alphabet triangle mast
//   A
//  AB
// ABC
//ABCD

  for(int i=1;i<=n;i++){//this loop only print only the number of lines
    int alpha = 65;//this will be initialized each times by 65 itself
    printf("\n");
    for(int j=1;j<=n-i;j++){ //this loop will print number only the white spaces if the value of 4 that means 4-1 =3 stars will be printed bcz in the 4th value 1 alphabet will be printed 
      printf(" ");
    }
    for(int k=1;k<=i;k++){ //this loop will print i number of alhabet in each line after printing the white spaces
      printf("%c",alpha); //prints the alphabets
      alpha ++; //increaments by 1
    }
  }
  return 0;
}