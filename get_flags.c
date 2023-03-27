#include "main.h"
/**
 * get_flags - Calculates active flags
 * @format: Formatted string print the arguments
 * @i: parameter to be taken.
 * Return: Flags:
 */
int get_flags(const char *format, int *i)
{
	int j, kr_i;
	int flags = 0;
	const char flg_ch[] = {'-', '+', '0', '#', ' ', '\0'};
	const int flg_arr[] = {_minus, _plus, _zero, _hash, _space, 0};

	kr_i = *i + 1;
	while (format[kr_i] != '\0')
	{
		j = 0;
		while (flg_ch[j] != '\0')
		{
			if (format[kr_i] == flg_ch[j])
			{
				flags |= flg_arr[j];
				break;
			}
			j++;
		}
		if (flg_ch[j] == 0)
			break;
		kr_i++;
	}
	*i = kr_i - 1;
	return (flags);
}
