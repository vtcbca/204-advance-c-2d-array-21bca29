/*write a pograme to enter 10 integer value and print only those value of the array which is even.
Date:07/01/2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,c;
    clrscr();
    for(i=0;i<10;i++)
    {
      printf("\n Enter value of a[%d]",i);
      scanf("%d",&a[i]);
    }
    clrscr();
    for(i=0;i<10;i++)
	   {
	    c=a[i]%2;
	    if(c==0)
		 printf("\n%d",a[i]);
	   }
	getch();
}