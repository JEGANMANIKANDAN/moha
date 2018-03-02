#include<stdio.h>
#include<conio.h>
 void main()
 {
 int a,b;
 clrscr();
 printf("Enter the two num:");
 scanf("%d%d",&a,&b);
 a=a^b;
 b=b^a;
 a=a^b;
 printf("The swap value is %d and %d",a,b);
 }
 getch();
 }
