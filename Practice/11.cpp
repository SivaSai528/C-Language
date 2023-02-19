#include<stdio.h>
main()
{
	float P,R,T,S;
	printf("Enter the Priciple Amount:-");
	scanf("%f",&P);
	printf("Enter the Interest:-");
	scanf("%f",&R);
	printf("Enter the Time:-");
	scanf("%f",&T);
	S=(P*R*T)/100;
	printf("Simple Intrest= %f",S);
}
