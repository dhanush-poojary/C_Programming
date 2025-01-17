//basic calculator of two numbers
#include<stdio.h>//header file for input and output functions(printf and scanf)

int main()
{  int a,b,c;
   float p,q,r;

   printf("Enter two number: "); //for normal arithematic calculations
   scanf("%d %d",&a,&b);
   c = a + b;
   
   printf("\n%d",a); printf(" + "); printf("%d",b); printf(" = "); printf("%d",c);
   c = a - b;

   printf("\n%d",a); printf(" - "); printf("%d",b); printf(" = "); printf("%d",c);
   c = a * b;
   
   printf("\n%d",a); printf(" * "); printf("%d",b); printf(" = "); printf("%d",c);
   
   printf("\n\n");// 1 line leave
   
   printf("Enter two numbers: ");//for decimal calclulations
   scanf("%f %f",&p,&q);
   
   r = p/ q;   
   printf("\n%5.5f",p); printf(" / "); printf("%5.5f",q); printf(" = "); printf("%5.5f",r);
   
   return 0;//this returns nothing to the main fucntion

}