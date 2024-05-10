#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


int linear_search(int *array, size_t size, int value)
{
    int i;
    for (i = 0; i < int(size); i++)
    {
        if (array[i] == value)
        {
            return (i);
        }
        else if (i == int(size) || array == NULL)
        {
            return (-1);
        }
        else
        {
            printf("Value checked array[%d] = [%d]", i, array[i]);
        }
    }

}
