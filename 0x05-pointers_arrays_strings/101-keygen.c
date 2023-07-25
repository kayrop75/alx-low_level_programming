#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * main - Generates random valid passwords for the program 101-crackme.
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    int sum = 0;
	        int diff;
		    char password[100];
		        int i;

			    srand(time(NULL));

			        for (i = 0; i < 100; i++)
					    {
						            password[i] = rand() % 94 + 33;
							            sum += password[i];

								            if (sum >= 2772)
										            {
												                diff = sum - 2772;
														            password[i] -= diff;
															                password[i + 1] = '\0';
																	            break;
																		            }
									        }

				    printf("%s\n", password);

				        return (0);
}

