#include<stdio.h>
main()
{
	float B,D,H,G;
	printf("Enter the Salary Amount:-");
	scanf("%f",&B);
	D=40*B/100;
	printf("Dearness Allowance= %f\n",D);
	H=20*B/100;
	printf("House Rent Allowance= %f\n",H);
	G=B+D+H;
	printf("Gross Salary = %f",G);
}
