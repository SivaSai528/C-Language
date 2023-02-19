#include<stdio.h>
main()
{
	int a,b,c,d,sum;
	printf("Enter a Three Digit Number:-");	
	scanf("%d",&a);
	if(a<1000)
	{
		if(a>99)
		{
		b=a/100;
		c=((a%100)/10);
		d=a%10;
		sum=b+c+d;
		printf("Sum of Digits=%d",sum);	
		}
	}

	else
	{
		printf("You Enter a Wrong Number");
	}
}

