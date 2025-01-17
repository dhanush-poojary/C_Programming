#include<stdio.h>//usage of typedef in different senarious
typedef int wholenumber;//here we changed the name of int to wholenumber but it is not a different datatype we can use it instead of using int in the program
typedef float realnumber;//it works as the same as int

int main(){
  wholenumber a = 10 ,b = 20;
  realnumber p = 12.5,q = 44.5;
  //typedef only changed name of specific datatype but not it's working
  printf("\nwholenumber  = %d\nrealnumber = %.0f",a+b,p+q);

  typedef struct details{//here by using typedef we changed the structure bane to XD so we can use XD variable declaration
    int age;
    float weight;
    float height;
  }XD;//it is not the variable but the name of the structure
  
  XD dhanush;//variable declaration
  dhanush.age = 18;
  dhanush.height = 170.0;
  dhanush.weight = 65.6;
//printing of various attributes of dhanush variable
  printf("\nAge = %d\n",dhanush.age);
  printf("hight = %.2f\n",dhanush.height);
  printf("weight = %.2f\n",dhanush.weight);
  
  return 0;
}