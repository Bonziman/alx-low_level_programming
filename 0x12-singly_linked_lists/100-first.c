#include <stdio.h>
#include "lists.h"
/**
 * __attributr__ - function that prints a text before main is executed.
 */

/**
 * premain - function that makes it executed premain. i think!
 */
void __attribute__ ((constructor)) premain()
{
	    printf("You're beat! and yet, you must allow,\n");
	    printf("I bore my house upon my back!\n");
}

