#include "main.h"

char *leet(char *str)
{
	char *rslt = str;

	while (*str != '\0')
	{
		while (*str == 97 || *str == 65)
		{
			*str = 52;
		}
		while (*str == 101 || *str == 69)
		{
			*str = 51;
		}
		while (*str == 111 || *str == 79)
		{
			*str == 48;
		}
		while (*str == 116 || *str == 84)
		{

		}
	}
}

