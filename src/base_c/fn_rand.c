#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

	srand(time(NULL));

	int range = 10;

	int r_1 = rand() % range;
	int r_2 = rand() % range - 5;
	double r_3 = (double)rand() / (double)RAND_MAX;

	printf("r_1 = %d, r_2 = %d, r_3 = %.2f\n", r_1, r_2, r_3);

	return 0;
}
