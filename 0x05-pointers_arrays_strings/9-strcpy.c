#include "main.h"

/**
 *  * _strcpy - Copies the string pointed to by src to the buffer pointed to by dest.
 *   * @dest: Pointer to the destination buffer.
 *    * @src: Pointer to the source string.
 *     *
 *      * Return: The pointer to dest.
 *       */
char *_strcpy(char *dest, char *src)
{
	    char *dest_ptr = dest;

	        /* Copy the characters from src to dest (including the null terminator) */
	        while (*src != '\0')
			    {
				            *dest = *src;
					            dest++;
						            src++;
							        }

		    /* Add the null terminator to the end of dest */
		    *dest = '\0';

		        return dest_ptr;
}

