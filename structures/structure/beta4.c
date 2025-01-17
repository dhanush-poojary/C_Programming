#include<stdio.h> //Array of structures to store data of 3 students
#include<string.h>
int main(){
  struct student{//structure datatype declaration
      int rollno;//structure members
      char name[10];
      float percentage;
      char section;
  };//usage of typedef to avoid extra things

  struct student arr[3];//declaration of array with the structure of datatype so it is called array of structure

//in array of structurs the array works the same way as normal but in it's each index 1 varible is created and inside which all the attributes are stores in continues manner also the difference index / variables
  strcpy(arr[0].name,"Dhanush"); //array's first index attributes
  arr[0].rollno = 1533;
  arr[0].percentage = 91;
  arr[0].section = 'B';

  strcpy(arr[1].name,"Ganyashree");//array's second index attributes
  arr[1].rollno = 1203;
  arr[1].percentage = 90;
  arr[1].section = 'B';
  
  strcpy(arr[2].name,"Dhanushree");//array's third index attributes
  arr[2].rollno = 1503;
  arr[2].percentage = 63;
  arr[2].section = 'c';
//we can also print those by using for loop but we need to print it's each attributes individually
  printf("\t\tThe student enrollment list = \n");
  for(int i=0;i<3;i++){//for printing 3 student details
    printf("%s",arr[i].name);
    printf("\n----------");
    printf("\nRollo = %d\n",arr[i].rollno);
    printf("Percentage = %.0f\n",arr[i].percentage);
    printf("Section = %c\n",arr[i].section);
    printf("\n");
  }
  return 0;
}
