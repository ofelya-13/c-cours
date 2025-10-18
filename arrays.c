#include <stdio.h>
int main(){
	int scores[5] = {85, 92, 78, 95, 88};

	int sum = 0;
	for (int i = 0; i <5; i++) {
		sum += scores[i];
	}
	float average = (float)sum / 5;

	printf("\nScores: ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", scores[i]);
	}
	printf("\nAverage score: %.2f\n", average);
	return 0;
}
