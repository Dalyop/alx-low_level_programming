#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100 followed by a new line
 * For multiples of 3, prints Fizz and for multiples of 5 prints Buzz
 * for multiples of 3 and 5 it prints FizzBuzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("%s", " Fizz");
		}
		else if(i % 5 == 0 && i % 3 != 0)
		{
			printf("%s", " Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s", " FizzBuzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
