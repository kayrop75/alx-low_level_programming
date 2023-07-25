#include "main.h"

/**
 *  * _putchar - Writes a character to the standard output (stdout).
 *   * @c: The character to be written.
 *    *
 *     * Return: On success, the character written is returned.
 *      * On error, -1 is returned.
 *       *
 *        * Note: This function is provided by you separately. Make sure it is declared
 *         * in the main.h header file.
 *          */

/**
 *  * print_rev - Prints a string in reverse, followed by a new line.
 *   * @s: Pointer to the string to be printed in reverse.
 *    */
void print_rev(char *s)
{
	    int length = _strlen(s);

	        for (int i = length - 1; i >= 0; i--)
			    {
				            _putchar(s[i]);
					        }

		    _putchar('\n');
}

