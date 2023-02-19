#include<stdio.h>
#include<math.h>
main()
{
	float b,h,hy,c,a,q,w,e;
	printf("Enter the value of base:");
	scanf("%f",&b);
	printf("Enter the value of height:");
	scanf("%f",&h);
	q=b*b;
	w=h*h;
	e=q+w;
	hy=sqrt(e);
	printf(" value of hypotenuse=%f\n",hy);
	a=0.5*b*h;
	printf("Area Of the Right Angle Triangle = %f\n",a);
	c=b+h+hy;
	printf("Circumference of the Right Angle Triangle= %f",c);
	
}
