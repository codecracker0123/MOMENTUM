#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();

	printf("Enter an integer number\n");
	scanf("%d", &n);

	(n % 2 == 0) ?
	(printf("%d is even number\n", n)) :
	(printf("%d is  odd number\n", n));
	getch();
}