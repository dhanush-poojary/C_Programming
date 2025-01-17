#include<stdio.h>//To check whether the 2 structure's department are the same or not using functions
#include<string.h>
#include<stdbool.h>
//this is a global declaration which means we can use it anywhere
  typedef struct student{//created a student datatype of type structure
    int rollno;
    char department[20];
    char course[20];
    char name[20];//members
    int year_joining;
  }student;//typedef into student
  
void check(student s1,student s2){//receing a 2 structure variable of type student 
  char str1[20],str2[20];
   strcpy(str1,s1.department);//we just copied the departments of 2 structures into another string/ character array
   strcpy(str2,s2.department);
  bool checker = false;//if this remains false then it means there is no simmilar things in to departments
  for(int i=0;str1[i] && str2[i] !='\0';i++){//it will check the coding of both string till end of the character
    if(str1[i] == str2[i]){//if both string has same characters then it will update the checker to true
      checker = true;
    }
  }
  if(checker == false){//prints whether the departments of 2 structures are same nor not
     printf("\nThe both departments are different");
  }
  else{
    printf("\nThe both department are the same");
  }
  return;
}  
int main(){
   
   student s1,s2;//2 structure variable declaration of type student
   s1.rollno = 1533;//initialization of different members
   s1.year_joining = 2007;
   strcpy(s1.name,"Gamer");
   strcpy(s1.course,"BCA");
   strcpy(s1.department,"Computer Science");
   
   s2.rollno = 1209;//initialization of different members
   s2.year_joining = 2006;
   strcpy(s2.name,"Coder");
   strcpy(s2.course,"B.com");
   strcpy(s2.department,"computer science");
   check(s1,s2);//calling a function by passing 2 structure variables
   return 0;
}