#include<stdio.h>//basic working of structures
#include<string.h>
int main(){
  struct student{/*declaration of structure
structure members works the same way as array but it stores different datatypes in it */
      int rollno;//these are structure members
      char section;
      int class;
      char name[15];
  };//here we can also declare different variables of strcture
  
  struct student dhanush;//here student is the datatype and dhanush is the variable
//below is intialization of variable throught dot(.) operator
  dhanush.rollno = 1533;
  dhanush.section = 'B';
  dhanush.class = 13;
  //using strcpy we can directly modify the entire string
  strcpy(dhanush.name,"Dhanush");
  printf("The details of student= \nname = ");
  puts(dhanush.name);
  //printing of variable
  printf("rollno = %d\nname = %c\nclass %d",dhanush.rollno,dhanush.section,dhanush.class);

  return 0;
}