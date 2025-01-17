#include<stdio.h>            //printing up to 100 in while
int main()
{    
   int i=1;//starting point
   while(i<=100){//we can also use i<101 or i<=100-1 means(i<=n-1)
    printf("%d ",i);
    i++;//adds 1
   }
   return 0;
}