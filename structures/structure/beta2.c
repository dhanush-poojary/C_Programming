#include<stdio.h>//structure declaration of a book details containing of it's price name and number of pages
int main(){
  struct book{//here datatype is book
    int price;//structure member
    char name[15];
    int no_pages;
  }book1,book2;//variable declaration of type book
  //taking input of different members of the book1
  printf("Enter the name of book1:");
  gets(book1.name);
  printf("Enter the price of the book1:");
  scanf("%d",&book1.price);
  printf("Enter the number of pages of book1:");
  scanf("%d",&book1.no_pages);
//printing of details of book1
  printf("name = %s\nprice = %d\nnumber of pages = %d",book1.name,book1.price,book1.no_pages);
//taking input of different members of the book1
  printf("Enter the name of book1:");
  gets(book2.name);
  printf("Enter the price of the book1:");
  scanf("%d",&book2.price);
  printf("Enter the number of pages of book1:");
  scanf("%d",&book2.no_pages);
//printing of details of book1
  printf("name = %s\nprice = %d\nnumber of pages = %d",book2.name,book2.price,book2.no_pages);
  return 0;  
}