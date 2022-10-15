#include <stdlib.h>
#include <time.h>

/*
 * Main: Entry point
 * Return : 0 means sucess
 * Description: This program checks if the random number generated is positive or negative
*/



int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	switch n{
		case n > 0:
		printf("%d is positive\n", n);
		break;
		case n = 0:
		printf("%d is zero\n",n);
		break;
		case n < 0:
		printf("%d is negative\n",n);
		break;
	}
	return (0);
}
