#include<stdio.h>  //Function to find greatest of 3 numbers
//called function
int greatest(int a,int b,int c){//these are parameters
//checking for greatest numbers 
  if(a>b && a>c) printf("%d is greatest",a);
  else if(b>a && b>c) printf("%d is greatest",b);
  else printf("%d is greatest",c);
  return 0;
}
int main(){
  int x,y,z; // we can change parameter and arguements differently but it will be replaced in function call and called function
  printf("Enter three numbers:");
  scanf("%d %d %d",&x,&y,&z);
//calling the greatest function  
  greatest(x,y,z);//these are called arguements
  return 0;
}