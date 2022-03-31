/*write a menu driven pograme to perform following operation.
1.Array linear search
2.Array sorting
3.Exit    */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
   int a[5],i,j,c,k,n,temp,search;
   char ch;
   clrscr();
   do
   {
   printf("\t\t\t MENU");
   printf("\n________________");
   printf("\n 1.Array linear search \n 2.Array sorting \n 3.Exit");
   printf("\n_____________________________");
   for(i=0;i<5;i++)
   {
       printf("\n\t Enter value in a[%d]");
       scanf("%d",&a[i]);
   }
   clrscr();
   for(i=0;i<5;i++)
       printf("\n%d",a[i]);
   printf("\n_________________");
   printf("\n\t Enter your choice:");
   scanf("%d",&k);
   switch(k)
   {
	   case 1:
		  printf("Enter a number to search: \n");
		  scanf("%d",&search);
		  for(i=0;i<5;i++);
		  {
		       if(a[i]==search)
		       {
			    printf("%d is present at location %d\n");
			    break;
		       }
		  }
		  if(i==10)
			   printf("%d is not present in the array.\n",search,i+1);
		  break;
	   case 2:
		  for(i=0;i<n;i++)
		  {
		       for(j=0;i<n-1;j++)
		       {
			      if(a[j]>a[j+1])
			      {
				     temp=a[j];
				     a[j]=a[j+1];
				     a[j+1]=temp;
			      }
		       }
		  }
		  printf("\n sorted array:");
		  for(i=0;i<n;i++)
		       printf("%d",a[i]);
		  break;
	   case 3:
		  exit(0);
	   default:
		  printf("\n Invalid number:");
		  break;
   }
   printf("\n Do you want to run continue?(Yes=Y/y,No=N/n)");
   flushall();
   scanf("%c",&ch);
   }while(c=='Y'||c=='y');
   getch();
}




