#include<stdio.h>      //tower of honoi
//there are 3 rods in the tower namely source,helper,destination
int tower(int n,char s,char h,char d){
  if(n==0) return; //base case
  tower(n-1,s,d,h);//this for moving the small pyrmid n-1 to the helper which treats as a destination for now
  printf("\n%c -> %c",s,d);
  tower(n-1,h,s,d);//lastly moving the n'th disk from the source to the destination
  return;
}
int main(){
  int n;
  printf("Enter the number of disks :");
  scanf("%d",&n);//user inputting number of disks
  tower(n,'A','B','C');//there only 3 rods in tower of honoi
  return 0;
}