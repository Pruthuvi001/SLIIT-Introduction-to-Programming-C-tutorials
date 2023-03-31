#include<stdio.h>
int main(void)
{
	int rad;
	int d;
	float c;
	float a;
	printf("Enter the radius of the circle:");
	scanf("%d",&rad);
	d=rad*2;
	c=2*(22/7.0)*rad;
	a=(22/7.0)*rad*rad;
	printf("Diameter of the Circle:%d\n",d);
	printf("Circumference of the Circle:%.2f\n",c);
	printf("Area of the Circle:%.2f\n",a);
	return 0;
}