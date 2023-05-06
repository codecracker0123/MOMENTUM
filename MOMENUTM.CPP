#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char ch;
	printf("Enter the char.=");
	scanf("%c",&ch);
	if((ch>='a'&&ch<='z')||
	  (ch>='A'&&ch<='Z'))
	  {
	  printf("Char. %c is Alphabet.",ch);
	  }
	else if(ch>='0'&&ch<='9')
	{
	printf("Char. %c is Digit.",ch);
	}
	else
	{
	printf("Char. %c is special Char.");
	}
	getch();
}