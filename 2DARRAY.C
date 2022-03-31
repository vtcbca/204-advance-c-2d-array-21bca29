/*Demostration of 2D numberical array  */
#include<stdio.h>
#include<conio.h>
void main()
{
     int a[3][3],i,j;    //first subscripte=row and second subscripte=column
     clrscr();
     //logic: input value into array
     for(i=0;i<3;i++) //row
     {
	 for(j=0;j<3;j++)  //column
	 {
	     printf("\n Enter value for a[%d][%d]:",i,j);
	     scanf("%d",&a[i][j]);
	 }
     }
     //logic:print 2D array
     for(i=0;i<3;i++)
     {
	 for(j=0;j<3;j++)
		printf("%d\t",a[i][j]);
	 printf("\n");
     }
     getch();
}


