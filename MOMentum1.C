#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	clrscr();
	printf("please enter a charecter");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90 || ch >= 'a' && ch <='z')
	{
		printf("%c is an alphabet\n");
	}
	else if(ch >='0' && ch<='9')
	{
		printf("%C is digit\n",ch);
	}
	else
	{
		printf("%c is spacial character\n",ch);
	}
	getch();
}