#include<stdio.h>//To print the elemets of only row/column as required
int main(){
  int choice;
  while(choice!=3){ //if the value of choice becomes 3 this while loop will terminate
    printf("\n\t\tThe matrix shop");
    printf("\n1. elemets of row\n2. elements of column\n3. exit");
    printf("\nEnter your choice:");
    scanf("%d",&choice);//asking the user to enter choice
     int n,m;
    printf("\nEnter the dimensions of matrix(mXn):");
    scanf("%d %d",&m,&n);//rows and column size
    int arr[m][n];//an array declaration
    printf("\nEnter the %d array elements:\n",n*m);
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        scanf("%d",&arr[i][j]);//taking the n*m elements input
      }
    }
    switch (choice)
    {  int constent = 0;//in row printing column only column changes
    case 1: printf("Enter the row number to be printed(0 to %d):",m-1);
    scanf("%d",&constent);//const is the row which the user wants to print its elements
    for(int k=0;k<n;k++){
      printf("\t%d",arr[constent][k]);//prints the elements of a specific row
    }
      break;
    constent = 0;//in column printing  only the row changes
    case 2: printf("Enter the column number to be printed(0 to %d):",n-1);
    scanf("%d",&constent);//const is the column which the user wants to print its elements
    for(int k=0;k<m;k++){
      printf("\v%d",arr[k][constent]);//prints the elements of a specific column
    }
      break;
    case 3: printf("\nExiting...");//this is for coming out of the loop or switch block
      break;
    default: printf("\nInvalid choice!");//if the choice if greather then 4 or any value then this will execute
      break;
    }
    }
   return 0;
}

