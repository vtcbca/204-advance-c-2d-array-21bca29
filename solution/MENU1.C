/*wap menudriven pograme to perform following task using diferent function category.
1:prime number
2:palindrom number
3:reverse number
4:print even number till n
5:exit     */
#include<stdio.h>
#include<conio.h>
void prime();
void palindrom(int);
int reverse();
int even(int);
int(menu);
void main()
{
	int n,c;
	char yn;
	clrscr();
	do
	{
	c=menu();
	switch(c)
	{
		case 1:
			prime();
			break;
		case 2:
			printf("Enter value of n:");
			scanf("%d",&n);
			palindrom(n);
			break;
		case 3:
		case 4:
		case 5:
			exit(0);
		default:
			printf("Invalid choise");
	}
	printf("\n\n\t Do you want to continue?(yes=Y/y,no=N,n):");
	flushall();
	scanf("%c",&yn);
	}while(yn=='Y'||yn=='y');
	getch();
}
int menu()
{
	int c;
	printf("\n menu");
	printf("\n____________\n 1:prime \n 2:palindrom \n 3:reverse number \n 4:even number series \n 5:exit \n______________\n");
	printf("\n\n\t Enter your choise:");
	scanf("%d",&c);
	return c;
}
void prime()
{
	int n,i,count=0;
	printf("Enter value of n:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count=1;
			break;
		}
	}
	if(count==1)
		printf("Enter number is prime:");
	else
		printf("Enter number is not prime:");
}


