#include <stdio.h>
#include "main.h"

int main(void)
{
	    char word[] = "_putchar";
	        int length = sizeof(word) - 1;

		    for (int i = 0; i < length; i++)
			        {
					        for (int j = 0; j <= i; j++)
							        {
									            putchar(word[j]);
										            }
						    }

		        putchar('\n');

			    return 0;
}

