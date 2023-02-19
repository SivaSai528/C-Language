#include<stdio.h>
main()
{
	float m,s,e,t,h,sum,p;
	printf("Enter the Marks of Maths:-");
	scanf("%f",&m);
	printf("Enter the Marks of Science:-");
	scanf("%f",&s);
	printf("Enter the Marks of English:-");
	scanf("%f",&e);
	printf("Enter the Marks of Telugu:-");
	scanf("%f",&t);
	printf("Enter the Marks of Hindi:-");
	scanf("%f",&h);
	if (m<101)
	{
		if (s<101)
		{
			if (e<101)
			{
				if (t<101)
				{
					if (h<101)
					{
						sum=m+s+e+t+h;
						p=sum/500*100;
					    printf("Total Marks=%f\n",sum);
						printf("Percentage=%f",p);
					}
				}
			}
		}
	}
	else
	{
		printf("You Entered Wrong Marks");
	}
}
