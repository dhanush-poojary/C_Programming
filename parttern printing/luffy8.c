   #include<stdio.h>  //To print alphabet triangle pattern
int main()         //using user inputs
{  int n;
   printf("Enter the number of lines: ");
   scanf("%d",&n);//here we need only rows to be inputed
   
//alphabet triangle
// A
// ab
// ABC
// abcd
// ABCDE
  int a; //we are printing alphabet using this variavble
  for(int i=1;i<=n;i++){ //this loop will print a new line in its each eitheration
    printf("\n");
//this if statement is to decide if i is odd then print uppercase alphabets
//else it is  even then print lowercase alphabets
    if(i%2!=0) a = 65;//A ASCII value is 65 and Z is 90
    else a = 97;//a ASCII value is 97 and z is 122
    for(int j=1;j<=i;j++){//this loop will print a in its each eitheration like if i is 1 then 1 times and ...so on

      printf("%c",a);//basically we typecasted int to char

//in this if statement we are increamenting the value of a  in if both cases if it comes between  
      if(a>=65 || a<=90) a++;//<-this is for uppercase
      else if(a>=97 || a<=122) a++;//<-this is for lowercase
      
    }
 } 
    return 0;

}