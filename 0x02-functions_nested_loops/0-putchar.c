#include <stdio.h>
#include "main.h"

/**
 *  * main - Entry point of the program
 *   *
 *    * Description: Prints the "_putchar" string using nested loops.
 *     *
 *      * Return: Always 0 (Success)
 *       */
int main(void)
{
	    char word[] = "_putchar";
	        int length = sizeof(word) - 1;
		    int i, j;

		        for (i = 0; i < length; i++)
				    {
					            for (j = 0; j <= i; j++)
							            {
									                _putchar(word[j]);
											        }
						        }

			    _putchar('\n');
			        fflush(stdout);

				    return 0;
}

