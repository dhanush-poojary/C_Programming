#include<stdio.h>//To read name,age,no matches and average runs of 5 cricketer using array of structure
#include<string.h>
int main()
{  typedef struct cricketer{//structure dataype cricketer declaration
    char name[10];//structure members / attributes
    int age;
    int no_matches;
    float average_runs;
  }cricketer;//usage of typedef
  
  cricketer arr[5];//declaration of array of structures
//here the each cricketers are stored in each index's which accts as the structure variable to retrive there states
  printf("\t\tEnter the cricketers names\n");
  for(int i=0;i<5;i++){//this is for reading each cricketers details in continous manner
    printf("\nEnter %d'th cricketer name:",i+1);
    fflush(stdin);//this is to resolve the issue of string input we use this 
    gets(arr[i].name);
    printf("\nEnter %s's age:",arr[i].name);
    scanf("%d",&arr[i].age);
    printf("\nEnter %s's no of matches:",arr[i].name);
    scanf("%d",&arr[i].no_matches);
    printf("\nEnter %s's average runs:",arr[i].name);
    scanf("%f",&arr[i].average_runs);
    printf("\n");//for neatness after each cricketers details are rad leaving a line
  }
  printf("\t\tlist of the cricketer : ");
  for(int i=0;i<5;i++){//for printing the details of each cricketers  continous wise with there each attributes/members
    printf("\nName = %s\n",arr[i].name);
    printf("---------\n");
    printf("Age = %d\n",arr[i].age);
    printf("No of matches = %d\n",arr[i].no_matches);
    printf("Average runs =%.2f\n",arr[i].average_runs);
    printf("\n");
  }

    return 0;
}