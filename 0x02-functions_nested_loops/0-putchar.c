#include <stdio.h>
#include "main.h"

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

			        return 0;
}

