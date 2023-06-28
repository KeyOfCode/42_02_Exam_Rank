#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void	write_num(int i)
{
	if (i >= 10)
	{
		write_num(i / 10);
		i = i % 10;
	}
	char n = i + 48;
	if (i < 10)
		write(1, &n, 1);
}

void	alt_ft_write_number(int number)
{
	char	str[10] = "0123456789";

	if (number > 9)
		alt_ft_write_number(number / 10);
	write (1, &str[number % 10], 1);
}
/* Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead. */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			write_num(i);
		write (1, "\n", 1);
		i++;
	}
}
