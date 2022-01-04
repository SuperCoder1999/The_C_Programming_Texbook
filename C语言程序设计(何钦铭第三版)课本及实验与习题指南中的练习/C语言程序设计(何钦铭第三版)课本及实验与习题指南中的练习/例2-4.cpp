#include"Head.h"
#include<cstdio>

int main() {
	float x = 0;
	float y = 0;
	printf("Enter x (x>=0):\n");
	scanf("%f", &x);
	if (x <= 15)
		y = 4 * x / 3;
	else
		y=2.5 * x - 10.5;
	printf("y=f(%f)=%.2f",x, y);
	return 0;
}