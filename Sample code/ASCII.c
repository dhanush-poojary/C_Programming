#include<stdio.h>                         //ASCII values
void main()
// {  char c;
//   //asking to enter char in the keyboard
//    printf("Enter anythin to know its ASCII value: ");
//    scanf("\n%c",&c);
//    printf("\nValue = %d",c);
//    //by using %d with char type it will return ASCII value of it
// }
{  //this is just to display the sizes of data types
  int a;                
  long int b;
  long long int c;
  float d;
  char e;
  double f;
  //%zu is necessary or else it will give an error (lu)
  printf("\nThe size of int %zu",sizeof(a));   printf(" bytes");
  printf("\nthe size of long int %zu",sizeof(b)); printf(" bytes");
  printf("\nthe size of long long int %zu",sizeof(c)); printf(" bytes");
  printf("\nThe size of float %zu",sizeof(d)); printf(" bytes");
  printf("\nThe size of char %zu",sizeof(e)); printf(" bytes");
  printf("\nThe size of double %zu",sizeof(f)); printf(" bytes");
  //return 0; it cant be used with void as it return something
}
