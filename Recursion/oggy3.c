#include<stdio.h>//To find the no of ways in maze path
                    //***condition is Right and down****//
int maze(int cr,int cc,int er,int ec){//cr cc will hold 1,1
  int rightways = 0;
  int downways = 0;
  if(cr == er && cc == ec) return 1;//it will return 1 ways each time the if gets true which means 1 time maze complete
  if(cr == er){//we are at ending row so we are adding column so that we can go right
     rightways+= maze(cr,cc+1,er,ec);
  }
  if(cc == ec){//we are at ending column so we are adding row so that we can go down
     downways+= maze(cr+1,cc,er,ec);
  }
  if(cr < er && cc < ec){//this is important bcz this will move around the maze else  maze will not move
    rightways+= maze(cr,cc+1,er,ec);
    downways+= maze(cr+1,cc,er,ec);
  }
  int totalways = rightways + downways; //it will add both and return the final number of ways to each m,n
  return totalways;
}       


int main()    
{  int n,m; 
  printf("Enter the number of rows and columns:");
  scanf("%d %d",&n,&m);//user input of rows and columns
  int now = maze(1,1,n,m);//we are using 4 parameters so the starting point of maze is always 1,1
  printf("\nThe number of ways are= %d",now);
    return 0;
}