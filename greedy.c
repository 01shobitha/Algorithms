#include<stdio.h>

int main()
{
	int QUATER=25;
	int DIME=10;
	int NICKEL=5;
	int PENNY=1;
	int count=0;
	int n;

	printf("enter number: ");
	scanf("%d",&n);
	int num=n;

	if(num>=QUATER)
	{
		count+=(num/QUATER);
		num%=QUATER;

	}
	if(num>=DIME)
	{
		count+=(num/DIME);
		num%=DIME;
	}
	if(num>=NICKEL)
	{
		count+=(num/NICKEL);
		num%=NICKEL;
	}
	if(num>=PENNY)
	{
		count+=(num/PENNY);
		num%=PENNY;
	}
	printf("count: %d",count);

	return 0;
}
