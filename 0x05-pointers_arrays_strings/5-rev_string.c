#include "main.h"

/**
 *  * _strlen - Returns the length of a string.
 *   * @s: Pointer to the string.
 *    *
 *     * Return: Length of the string (excluding the null terminator).
 *      */
int _strlen(char *s)
{
	    int length = 0;

	        while (*s != '\0')
			    {
				            length++;
					            s++;
						        }

		    return length;
}

/**
 *  * rev_string - Reverses a string.
 *   * @s: Pointer to the string to be reversed.
 *    */
void rev_string(char *s)
{
	    int length = _strlen(s);
	        char temp;

		    for (int i = 0; i < length / 2; i++)
			        {
					        temp = s[i];
						        s[i] = s[length - i - 1];

