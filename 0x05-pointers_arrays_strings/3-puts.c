#include "main.h"
#include <stdio.h>

/**
 *  * _puts - Prints a string, followed by a new line, to stdout.
 *   * @str: Pointer to the string.
 *    */
void _puts(char *str)
{
	    int i = 0;

	        /* Loop through the string and print each character */
	        while (str[i] != '\0')
			    {
				            putchar(str[i]); /* Use putchar instead of _putchar */
					            i++;
						        }

		    putchar('\n'); /* Print a new line after printing the characters */
}

