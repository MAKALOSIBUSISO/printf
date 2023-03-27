#include "main.h"
/**
 * get_flags - Calculates active flags
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
 * Return: Flags:
 */

int get_flags(const char *format, int *i)
{
	int j, curr_i;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};
	int flags_len = strlen(FLAGS_CH);

	curr_i = *i + 1;
	while (format[curr_i] != '\0')
	{
		j = 0;
		while (j < flags_len)
		{
			if (format[curr_i] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[j];
				goto end_inner_loop;
			}
			j++;
		}
		curr_i++;
	}
end_inner_loop:
	*i = curr_i - 1;
	return (flags);
}
