#include<stdio.h>//union delcaration and initialization
#include<string.h>
int main()
{
   union student{ //union works exactly the same as structures expect 1 thing in union only 1 member can be manipulated that means at once the member which is initialized atthe last can only be accessed hence it is the size of the union itself
      int rollno;
      char section;
      int class;
      char name[15];
  }std1;
  std1.class = 12;//any other members are accessed then it is overwritten on that data hence the size will be changed
  std1.rollno = 1345;
  std1.section = 'c';
  strcpy(std1.name,"Brochand");//this can only be accessed 
                                              
  printf("%s",std1.name);//string will be printed as it is initialized at the end of all the initializations of members
  return 0;
}
