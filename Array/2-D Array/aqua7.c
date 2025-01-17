#include<stdio.h>//spiral printing of 2-D matrix
int main(){
  int m,n;
  printf("Enter the row and columns sizes of matrix:");
  scanf("%d %d",&m,&n);
  int minr = 0,maxr = m-1; //for row printing
  int minc = 0,maxc = n-1; //for column printing
  int no_ele = n*m,count=0;//no_ele is the number of element in side the matrix ,and the count will be increamented in printing of each element of the 2-D array

  int arr[m][n];//array declration
  printf("\nEnter the %d elements of the matrix:\n",m*n);
  for(int i=0;i<m;i++)
  {  for(int j=0;j<n;j++){
      scanf("%d",&arr[i][j]);//takes elements input
  }
  }
  printf("\nThe spiral ordered matrix is = \n");
  while(count<no_ele){//if all the elements are printed then the loop must be breaked
    //printing minc to maxc in normal order 
    for(int j=minc;j<=maxc;j++){
      printf("%d ",arr[minr][j]);//row is constent
      count++;
    }
    minr++;//we are incrementing the minr bcz we dont need that row anymore
    if(count>=no_ele) break;
    //printing minr to maxr in normal order 
    for(int i=minr;i<=maxr;i++){
      printf("%d ",arr[i][maxc]);//column is consent
      count++;
    }
    maxc--;//we are decreamenting the maxc bcz we dont need that column anymore
    if(count>=no_ele) break;
    //printing maxc to minc in reverse order 
    for(int j=maxc;j>=minc;j--){
      printf("%d ",arr[maxr][j]);//row is constent
      count++;
    }
    maxr--;//we are decreamenting the maxr bcz we dont need that row anymore
    if(count>=no_ele) break;
    //printing maxr to minr in reverse order 
    for(int i=maxr;i>=minr;i--){
      printf("%d ",arr[i][minc]);//column is constent
      count++;
    }
    minc++;//we are incrementing the minc bcz we dont need that column anymore
//reason to  -- and ++ we are printing the smaller matrix after 1st ietheration
  }
  return 0;
}
