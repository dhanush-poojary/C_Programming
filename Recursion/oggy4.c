#include<stdio.h>//To find the no of ways in maze path
                    //***condition is Right and down****//
int maze(int row,int column){//we are going opposite in this maze
  int rightways = 0;
  int downways = 0;
  if(row == 1 && column==1) return 1;//if both are true it means 1 way is completed
  if(row ==1) //if the row is ended so that we can go only right so -1 from column
  {
    rightways+=maze(row,column-1);
  }
   if(column==1) //if the column is ended so that we can go only right so -1 from row
  {
    downways+=maze(row-1,column);
  }
  if(row>1 && column>1){//this is important bcz this will move around the maze else  maze will not move
    rightways+=maze(row,column-1);
    downways+=maze(row-1,column);
  }
  int totalways = rightways + downways;//it will add both and return the final number of ways to each m,n
  return totalways;
}       


int main()    
{  int n,m; 
  printf("Enter the number of rows and columns:");
  scanf("%d %d",&n,&m);//user input of rows and columns
  int now = maze(n,m);//function called with 2 arguements
  printf("\nThe number of ways are= %d",now);//printing of final number of ways
    return 0;
}