#include<stdio.h>
main()
{
	int a,b,q,r;
	printf("Enter the value of A:-");
	scanf("%d",&a);
	printf("Enter the value of B:-");
	scanf("%d",&b);
	q=a/b;
	printf("Quotient= %d\n",q);
	r=a%b;
	printf("Remainder= %d",r);
	
}
