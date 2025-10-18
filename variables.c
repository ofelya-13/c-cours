#include <stdio.h>
int main(){
	int a = 10;
	int b = 3;
	float temperature = 23.5;
	char grade = 'A';

	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	int quotient = a / b;
	int remainder = a % b;
	float decimal_div = (float)a / b;

	printf("a = %d, b = %d\n", a, b);
	printf("Sum: %d\n", sum);
	printf("Difference: %d\n", difference);
	printf("Product: %d\n", product);
	printf("Quotient: %d\n", quotient);
	printf("Remainder: %d\n", remainder);
	printf("Grade: %c\n", grade);
	return 0;
}
