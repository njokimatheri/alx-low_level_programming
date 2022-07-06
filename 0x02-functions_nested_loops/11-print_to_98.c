#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 * @n: first parameter
 *
 * Description: prints all num to 98
 * Return: Always (0).
 */

void print_to_98(int n)

{
	if (n < 98)

	{
		for (n = n; n < 98; n++)

			printf("%d, ", n);



		printf("%d\n", 98);

	}

	else if (n > 98)

	{



		for (n = n; n > 98; n--)

			printf("%d, ", n);



		printf("%d\n", 98);

	}

	else

		printf("%d\n", 98);



}
