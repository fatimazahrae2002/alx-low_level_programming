/*
 * File: 0-positive_or_negative.c
 * Auth: Fatima Ezahraa Graini
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h> 

/*
 * prints a random number and and states whether
 *    it is positive, negative, or zero.
 *
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n>0)
		printf("%d is positive\n",n);
	else if (n==0)
		printf("%d is zero\n",n);
	else 
		printf("%d is negative\n",n);
	return (0);

}
