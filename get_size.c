#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 * @format: Formatted string in which to print the arguments
 * @i: List of the arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *i)
{
	int curr_i = (*i) + 1;
	int size = 0;

	switch (format[curr_i])
	{
		case 'l':
			size = S_LONG;
			break;
		case 'h':
			size = S_SHORT;
			break;
		default:
			*i = curr_i - 1;
			break;
	}
	*i = size ? curr_i : *i;

	return (size);
}

/**
 * main - function that executes the program.
 *
 * Return: 0 if the program exits successfully.
 */
int main(void)
{
	const char *format = "l";
	int i = 0;
	int size = get_size(format, &i);

	printf("%d\n", size);
	return (0);
}
