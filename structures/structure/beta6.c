#include<stdio.h>//a program to compare 2 structure variavbles whether there are equal or not
int main()
{  typedef struct date{//structure name is date
     int day;//these are structure members
     int month;
     int year;
   }date;//by using this with typedef we do not need to use struct student then variable name we can direcly write it as below

   date chuu; //1st structure variable
   chuu.day = 6;//members
   chuu.month = 1;
   chuu.year = 2007;

   date chee;//2nd structure variables
   chee.day = 3;//members
   chee.month = 10;
   chee.year = 2006;
//we can assign the entire structure variable to another but we can not compare it to another directly we need to use individual elements of those instead
 if(chuu.day == chee.day && chuu.month == chee.month && chuu.year == chee.year) printf("\nThe dates are equal");
  else printf("\nThe dates are different");
     return 0;
}