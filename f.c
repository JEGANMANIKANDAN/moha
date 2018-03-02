#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("Enter the Two num:");
    scanf("%d%d",&a,&b);
    
  c=a;
  a=b;
  b=c;
    
    printf("The swap num is %d and %d",a,b);
}
getch();
}
