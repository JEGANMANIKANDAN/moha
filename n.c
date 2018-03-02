#include<stdio.h>
#include<conio.h>
void main()
{
    int i,b;
    int a[10];
    clrscr();
    
     printf("Enter the value :");
     for(i=0;i<10;i++)
     {
         scanf("%d",a[i]);
     }
     for(i=0;i<10;i++)
     {
         if(a[i]>a[i+1])
         {
             b=a[i];
             a[i]=a[i+1];
             a[i+1]=b;
         }
     }

    printf("The value is %d",a[i]);
}
getch();
}
