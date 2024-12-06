//Lab 5 Part 2
//Deniz Uzun
#include<stdio.h>
#include<math.h>
int vol(double length,double width, double height,double depth, int n,double* totalV) {
	double d = depth / 100;
	double a = width / 2;
	double b = height / 2;
	double totalx = 0;
	int i;
	for (i = 1 ; i < 10000 ; i++) {
		double x = a * (sqrt(1 - (pow((i*(d/n)-b)/b, 2))));
		totalx = totalx + x;
	}
	double last = a * (sqrt(1 - (pow((d - b) / b, 2))));
	totalx = totalx + last/2;
	double volume = (d/n)*2*(totalx)*length; 
	*totalV = volume;
	return(0);
}

int main(void) {
	double w, h, l, d,v;
	const int n = 10000;
	printf("Enter the width of the tank (in meters): ");
	scanf_s("%lf",&w);
	
	printf("Enter the height of the tank (in meters): ");
	scanf_s("%lf",&h);
	
	printf("Enter the length of the tank (in meters) : ");
	scanf_s("%lf",&l);
	
	printf("Enter the specific depth on the measuring stick (in centimeters): ");
	scanf_s("%lf",&d);


	vol(l, w, h, d, n,&v);
	printf("Depth %.0lf cm : Volume %.2lf cubic meters", d, v);
	return(0);
}
