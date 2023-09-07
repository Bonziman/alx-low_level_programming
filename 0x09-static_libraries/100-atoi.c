#include "main.h"
#include <limits.h>
/**
 * _atoi - a function that converts strings into integers and retur rslt
 *
 * @s: the pointer to the string
 *
 */
int _atoi(char *s)
{
	int rslt = 0;
	int sign = 1;
	int digit_count = 0;

	while (*s == '+' || *s == '-' || (*s >= '0' && *s <= '9'))
	{
		if (*s == '-')
		{
			sign = -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			rslt = rslt * 10 + (*s - '0');
			digit_count++;
			if (digit_count > 9)
			{
				return ((sign == 1) ? INT_MAX : INT_MIN);
			}
		}
		s++;
	}
	return (rslt * sign);

}
