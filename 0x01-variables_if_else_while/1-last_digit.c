#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * @n: params of the random number
 *
 * Retunrn: Always 0 (Success)
 */
 int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX /2;
	/* modulus of n */
	int x;
	x = n % 10;
	/* conditions the check for the last digit and filterthe range between 6 and 0*/
	if ( x < 6 && x != 0)
	{
		printf("Last digits of %d is %d and is less than 6 and not 0\n", n,x);
	} else if (x<6 && x==0)
	{
		printf("Last digits of %d is %d and is 0\n",n,x);
	} else if (x>5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",n,x);
	}
	return (0);	
}
