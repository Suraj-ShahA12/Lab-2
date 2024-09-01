#include<stdio.h>
#include<math.h>
int main() {
	double base,exp;
	printf("Enter the base number: ");
	scanf("%lf",&base);
	printf("Enter the exponent number: ");
	scanf("%lf",&exp);
	double result=pow(base,exp);
	printf("Result=%lf",result);
}
