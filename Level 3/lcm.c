#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
	int i = 1;

	if (a == 0 || b == 0)
		return (0);
	while(1)
	{
		i++;
		if (i % a == 0 && i % b == 0)
			return(i);
	}
}

/* unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;	

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		++n;
	}
} */

int main (void)
{
	unsigned int a = 16, b = 3, res;
	res = lcm(a, b);
	printf("lcm = %d\n", res);
}