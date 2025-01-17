#include<stdio.h>//To find the prime factors of the given input 
//usig the functions

//prime factors means 1*6=6,2*3=6,and 6*1=6 so the prime factors of 6 are 1 2 3 and 6
void prime(int a){ 
  for(int j=1;j<=a;j+=1){
  for(int i=1;i<=a;i+=1){
  //if and only if the i and j 's multilication is = to the actual value like 2*3 = 6 
    if(i*j == a){
       printf("%d,\t",i);//then only print 
    }
    else{
      continue;//if not then skip that eitheration
    }  
  }
  }
  return;//end of the function
}
int main(){
  int x;
  printf("Enter the number:");
  scanf("%d",&x);//user input
  printf("The prime factors of %d are = \n",x);
  printf("\t\t\t\t");//printing part 
  prime(x);//function called with x's value
  return 0;
}