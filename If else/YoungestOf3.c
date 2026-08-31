#include <stdio.h>        //to find of youngest of 3 persons using nested if
int main()
{
  int raju, shyam, ram;

  printf("Enter the names of raju shyam and ram: ");
  scanf("%d %d %d", &raju, &shyam, &ram);
  //user input of 3 persons age
  //a < b then only enters in the is other wise it directly goes to else
  if(raju < shyam){ //this means b is greatest
    if(raju < ram) //a<c
    printf("Raju is youngest");
    else  //is a>c
    printf("Ram is youngest");
  }
  else{ //a>b this means a is greatest
    if(shyam < ram)//if b < c
    printf("Shyam is youngest");
    else //is b > c
    printf("Ram is youngest");
  }
  return 0;
}