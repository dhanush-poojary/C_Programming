#include<stdio.h>          //program to determine whether you got loss or profit
int main()
{  int cost,sell;
   
   printf("Enter the cost price of an item: ");
   scanf("%d",&cost);
   printf("\nEnter the selling price of an item: ");
   scanf("\n%d",&sell);
  //if the seeling price is more then the actual cost it is profit
   if(sell >= cost){/**************important**************************** */
    //>= is for if both the amt for equal it is also true but profit = 0
    printf("\nYou made a profit");
    printf("\nProfit= %d",sell - cost);//this will return the exact profit amount
   }
   else{//this is for loss
      printf("\nYou made a loss");
      printf("\nLoss= %d",cost - sell);//this will show the exact loss amount
     }
     return 0;
}