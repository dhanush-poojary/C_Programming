#include<stdio.h>//passing a structure to a function using pass by refference
typedef struct person{
  int age;
  float weight;
}person;
//pass by value
// void update(person human){ //here the value can not modified ,it can be printed here only but it is not a actual thing
//    human.age = 63;
//    human.weight = 63.66;
//   return;
// }
//pass by refference
void update(person* human){//using pointers we can actually modify the members of the structure through it's refference
   (*human).age = 63;
   human->weight = 63.66;
  return;
}
int main(){
  person p1;//structure variale declaration
  p1.age = 36;//value is set to a member
  p1.weight = 36.33;
  
  printf("%d\n",p1.age);//printing of that members value
  printf("%.2f\n",p1.weight);

  update(&p1);//calling a function by passing address of a structure variable

  printf("\n%d\n",p1.age);//printing updated value of members
  printf("%.2f\n",p1.weight);
  
     return 0;
}