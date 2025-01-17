#include<stdio.h>//netsing of functions in functions
#include<conio.h>

void korea(){
  printf("\nKorea");
  return;//this will return and stop the entire calling of the functions
}
void america(){
  printf("\nAmerica");
  korea();//this wil call korea;
  return;
}
void india(){
  printf("\nIndia");
   america();//this will call america
  return;
}
int main(){
  india();//this will call india
  return 0;
}