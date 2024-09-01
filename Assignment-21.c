#include<stdio.h>
int main() {
	float n1,n2;
	int op;
	printf("Enter an operaton\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
	scanf("%d",&op);
	printf("Enter two operands: ");
	scanf("%f%f",&n1,&n2);
	switch(op) {
		case 1:
			printf("%f",n1+n2);
			break;
		case 2:
			printf("%f",n1-n2);
			break;
		case 3:
			printf("%f",n1*n2);
			break;
		case 4:
			printf("%f",n1/n2);
		default:
			printf("Invalid operation");
	}
}
