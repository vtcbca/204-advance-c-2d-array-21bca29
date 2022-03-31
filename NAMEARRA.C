#include<stdio.h>
#include<conio.h>
void main()
{
     char s[6];
     int i;
     clrscr();
     for(i=0;i<6;i++)
     {
	printf(" Enter character s[%d]",i);
	flushall();
	scanf("%c",&s[i]);
	if(s[i]=='\n')
	break;
     }
     printf("\n\n Your name is %s",s);
     getch();
}