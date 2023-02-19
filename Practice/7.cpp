#include<stdio.h>
main()
{
	float km,m,f,i,c;
	printf("Enter the Distance Between Two Cites (Kilometers):-");
	scanf("%f",&km);
	m=km*1000;
	printf("Distance Between Two Cites in Meters= %f\n",m);
	f=km*3280.84;
	printf("Distance Between Two Cites in Feets= %f\n",f);
	i=km*39370.1;
	printf("Distance Between Two Cites in Inchs= %f\n",i);
	c=km*100000;
	printf("Distance Between Two Cites in Centimeters= %f",c);
	
}
