/* write a pograme to enter 10 integer value in to array and print it.   */
#include<stdio.h>
#include<conio.h>
void main()
{
     int a[10],i;
     printf(" Enter 10 numbers:");
     for(i=0;i<10;i++)
     {
	 scanf("%d",&a[i]);
     }
     printf("\n you entered:\n");
     for(i=0;i<10;i++)
     {
	 printf("%5d",a[i]);
     }
     getch();
}