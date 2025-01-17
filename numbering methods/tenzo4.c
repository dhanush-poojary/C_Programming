#include<stdio.h>   //To print armstrong numbers upto 500        
int main()//armstrong number means if the sum of cube of each digit is equal to the entered digit 153 = (1*1*1)+(5*5*5)+(3*3*3)
{ 
  int ld,sum,num;
  //ld stands for last digit 

  for(int i=1;i<=500;i++){ //this for loop runs 500 times
        num = i; //we are making the copy of i each time bcz we are changing it sooo
        sum = 0;//it is very imporant to initialize sum with 0 bcz the value of previous eitheration may still be there

//basically we are first taking last digit of num and taking the cube of it and adding it in the sum and after that we are cutting the last digit so that way we can end our loop after the each digit calculation
     while(num!=0){//this it true untill num becomes 0
       ld = num%10; //taking last digit of num
       sum = sum + (ld*ld*ld); //taking cube of ld and adding it to sum
       num = num/10;//cutting the last digit of num
       //cheching if the entered or i's value is equal to the sum of the digits which is for 500 number if it is equal then it will  print that number 
       if(i == sum) printf("%d ",i);
     }
     i++;//increamenting till 500 times by 1
  }

}
