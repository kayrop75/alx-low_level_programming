#include "main.h"

/**
 *  * puts2 - Prints every other character of a string, starting with the first character.
 *   * @str: Pointer to the string.
 *    */
void puts2(char *str)
{
	    int i = 0;

	        /* Loop through the string, printing every other character */
	        while (str[i] != '\0')
			    {
				            _putchar(str[i]);
					            i += 2;
						        }

		    _putchar('\n'); // Print a new line after printing the characters
				    // }
				    //
