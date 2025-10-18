#include <stdio.h>
int main(){
	int age;
	float height;
	char initial;

	printf("Please enter your age: ");
	scanf("%d", &age);

	printf("Enter your height in meters: ");
	scanf("%f", &height);

	printf("Enter your first initial: ");
	scanf(" %c", &initial);

	printf("Your information\n");
	printf("Age: %d years old\n", age);
	printf("Height: %f meters\n", height);
	printf("Initial: %c\n", initial);
	return 0;
}
