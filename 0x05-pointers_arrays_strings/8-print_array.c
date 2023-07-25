#include "main.h"
#include <stdio.h>

/**
 *  * print_array - Prints n elements of an array of integers, followed by a new line.
 *   * @a: Pointer to the array of integers.
 *    * @n: Number of elements to be printed.
 *     */
void print_array(int *a, int n)
{
	    if (a != NULL && n > 0)
		        {
				        for (int i = 0; i < n; i++)
						        {
								            printf("%d", a[i]);

									                // Print comma and space after all elements except the last one
											//             if (i != n - 1)
											//                             printf(", ");
											//                                     }
											//                                             printf("\n");
											//                                                 }
											//                                                 }
											//
