#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,max;
	clrscr();
	printf("Enter a number:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b)
	{
	      if(a>c)
	      {
		   if(a>b)
		      max =a;
		    else
		      max =d;
	      }
	      else
	      {
		   if(c>d)
		      max =c;
		   else
		      max =d;
	       }
	}
	else
	{
	      if(b>c)
	      {
		   if(b>d)
		      max =b;
		   else
		      max=d;
	      }
	      else
	      {
		   if(c>d)
		      max =c;
		   else
		      max =d;
	      }
	}
	printf("The maximum number is %d",max);
	getch();
}