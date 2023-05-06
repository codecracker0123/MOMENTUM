#include<stdio.h>
#include<conio.h>
void main()
{
	int unit,electricity_bill,sur_charge,total_eb;
	clrscr();
	printf("enter unit:-");
	scanf("%i",&unit);
	if(unit<=50)
	{
	   electricity_bill=unit*0.50;
	}
	else if(unit<=150)
	{
	   electricity_bill=(unit-50)*0.75+25;
	}
	else if(unit<=250)
	{
	   electricity_bill=(unit-150)*1.20+100;
	}
	else
	{
	   electricity_bill=(unit-250)*1.50+220;
	}

	sur_charge=electricity_bill*0.2;
	total_eb=electricity_bill+sur_charge;
	printf("total electricity bill = %d ",total_eb);


	getch();
}