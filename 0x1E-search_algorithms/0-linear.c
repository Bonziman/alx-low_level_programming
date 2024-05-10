#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


int linear_search(int *array, size_t size, int value)
{
    if (array == NULL)
    {
        return (-1);
    }
    size_t i;
    
    for (i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            return ((int)i);
        }
        else if (i == size || array == NULL)
        {
            return (-1);
        }
        else
        {
            printf("Value checked array[%d] = [%d]", (int)i, array[i]);
        }
    }
    return (-1);

}
