#include<stdio.h> //To store students rollno and marks side by side in a matrix array of 4 students
int main()
{ int std[4][2];
  printf("Enter student rollno and marks: ");
  for(int i=0;i<=3;i++){
    for(int j=0;j<=1;j++){
      scanf("%d",&std[i][j]);//taking array elements that is rollno and marks
    }
  }
  printf("\nThe rollno and marks of the students are = \n");
  printf("\nRollno marks");
    for(int i=0;i<=3;i++){
      printf("\n");
    for(int j=0;j<=1;j++){
      printf("%d ",std[i][j]);//printing array elements which is rollno and marks
    }
  }
    return 0;
}