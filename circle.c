#include<stdio.h>
#include<conio.h>
void main()
{
	int r;
	float c,area;
	printf("Enter a radius");
	scanf("%d",&r);
	printf("Diameter=%d\n",2*r);
	c=2*3.14*r;
	printf("Circumference=%f\n",c);
	area=3.14*r*r;
	printf("Area=%f\n",area);
}
