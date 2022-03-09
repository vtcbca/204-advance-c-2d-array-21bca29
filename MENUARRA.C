/* write a menu driven pograme to perform following operation
1:create array
2:reverse array
3:sum of array element
4:exit   */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
     int a[5],i,e,c,s,f;
     clrscr();
     printf("\n 1:create array \n 2:reverse array \n 3:sum of array element \n 4:exit");
     printf("\n__________________________________");
     printf("\n Enter your choise:");
     scanf("%d",&c);
     do
     {
     printf("\n Enter your choise:");
     scanf("%d",&c);
	  switch(c)
	  {
	       case 1:
		      for(i=0;i<5;i++)
		      {
			   printf("Enter value of a[%d]",i);
			   scanf("%d",&a[i]);
		      }
	       clrscr();
		      for(i=0;i<5;i++)
		      {
			   printf("\n%d",a[i]);
		      }
		      break;
	       case 2:
		     for(i=4;i<=0;i--)
		     {
			   printf("Enter value of a[%d]:",i);
			   scanf("\n%d",&a[i]);
		     }
		     break;
	       case 3:
		     clrscr();
		     for(i=0;i<5;i++)
		     {
			   printf("\n%d",a[i]);
		     }
	       case 4:
		     for(i=0;i<5;i++)
		     {
			   if(s==a[i])
			   {
			     f=1;
			     break;
			   }
		     }
		     if(f==1)
			    printf("\n Value is in array");
		     else
			    printf("\n Value is not array");
		     break;
	       case 5:
		     exit(0);
	       default:
		       printf("\n Invalid number \n please enter number betweem 1 to 5");
	  }
	       printf("Do you want print again(Yes=Y/y,No=N/n)");
	       flushall();
	       scanf("%c",&c);
     }while(c=='Y'||'y');
     getch();
}
