#include<stdio.h>//To find whether it's a perfect number or not
//usig the functions

//perfect number is a number excluding itselt its prime factors sum which is equal to the number itself


//prime factors means 1*6=6,2*3=6,and 6*1=6 so the prime factors of 6 are 1 2 3 and 6
int prime(int x){
  int value =0;
  //i and j are multiplied each time
for(int j=1;j<=x;j+=1)
  {  
    for(int i=1;i<=x;i+=1)
    {
  //if and only if the i and j 's multilication is = to the actual value like 2*3 = 6 
   
    if(i*j == x){
      value += i;//adding the sum of each prime factor which is i in this case
       printf("%d,\t",i);//then only print 
       
    }
    else{
      continue;//if not then skip that eitheration
    }  
  }
    }
    value -=x;//we are susbtracting value itself bcz value itself is not perfect number 
    if(value == x) printf("\n%d is The perfect number",x );
  return(value);
}
int main(){
  int x,ld = 0,value = 0;
  printf("Enter the number:");
  scanf("%d",&x);//user input
  printf("The prime factors of %d are = \n",x);
  printf("\t\t\t\t");//printing part 
  prime(x);//function called with a value(x)
  return 0;
}