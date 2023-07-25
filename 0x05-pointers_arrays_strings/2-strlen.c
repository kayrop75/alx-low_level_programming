#include "main.h"

/**
 *  * _strlen - Returns the length of a string.
 *   * @s: Pointer to the string.
 *    *
 *     * Return: Length of the string.
 *      */
int _strlen(char *s)
{
	    int length = 0;

	        /* Loop through the string and increment length until the null terminator is found */
	        while (*s != '\0')
			    {
				            length++;
					            s++;
						        }

		    return length;
}

