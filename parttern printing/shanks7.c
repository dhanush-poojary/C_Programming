#include<stdio.h> //Trending reels number game
int main(){      
  int n=10;  //there are 10 natural numbers in that reels
  
  for(int i=1;i<=n;i++){ //this loop prints the lines 
    printf("\n");
    int a = 1;//changing to 1 after evry eitheration of i
    for(int j=1;j<=i;j++){ //this loop prints the numbers
 
    printf("%d ",a);
    a+=1; //increamenting so it can go like 1 ,1 2 ,1 2 3...so on
  }
  }
  printf("\n\n");//2 lines

  for(int i=1;i<=n;i++){//this loop prints the lines 
    printf("\n");
    int a = 10;
    for(int j=1;j<=i;j++){//this loop prints the lines 
    printf("%d ",a);
    a-=1;//decreamenting so it can go like 10,10 9,10 9 8...so on
  }
  }
    
  return 0;
}