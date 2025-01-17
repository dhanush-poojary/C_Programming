#include<stdio.h>//To fill an matrix in spiral order and then after printing the resultant matrix
int main(){
  int m,n;
  printf("Enter the row and columns sizes of matrix:");
  scanf("%d %d",&m,&n);
  int minr = 0,maxr = m-1;//for row printing
  int minc = 0,maxc = n-1;//for column printing
  int no_ele = n*m,count=1;//no_ele is the number of element in side the matrix ,and the count will be increamented in printing of each element of the 2-D array

  int arr[m][n];//array declration
  printf("\nThe spiral ordered matrix is = \n");

//we used count variable to store 1 to n*m element bcz with each ietheration of inner loops it will be increamented by 1 so we are making use of it to store it in the matrix

  while(count<=no_ele){//if all the elements are stored in the place then the loop must be breaked
     //storing the elements from minr to maxr in normal order 
    for(int j=minc;j<=maxc;j++){
       arr[minr][j] = count;//row is constent
      count++;
    }
    minr++;//we are incrementing the minr bcz we dont need that row anymore
    if(count>no_ele) break;
         //storing the elements from minr to maxr in normal order 
    for(int i=minr;i<=maxr;i++){
      arr[i][maxc] = count;//column is consent
      count++;
    }
    maxc--;//we are decreamenting the maxc bcz we dont need that column anymore
    if(count>no_ele) break;
      //storing the elements from maxc to minc in reverse order
    for(int j=maxc;j>=minc;j--){
      arr[maxr][j] = count;//row is constent
      count++;
    }
    maxr--;//we are decreamenting the maxr bcz we dont need that row anymore
    if(count>no_ele) break;
    //storing the elements from maxr to minr in reverse order 
    for(int i=maxr;i>=minr;i--){
      arr[i][minc] = count; //column is constent
      count++;
    }
    minc++;//we are incrementing the minc bcz we dont need that column anymore
  //reason to  -- and ++ we are printing the smaller matrix after 1st ietheration  
  }
  printf("\nthe final filled spiral matrix= \n");
  for(int i=0;i<m;i++)
  {  printf("\n"); 
    for(int j=0;j<n;j++){
      printf("\t%d",arr[i][j]);//printing of reusltant spiral ordered matrix
  }
  }
  return 0;
}
