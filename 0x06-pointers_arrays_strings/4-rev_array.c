#include "main.h"

/**
 *  * reverse_array -  function that reverses the content of an array of integers
 *   *
 *    * @a: pointer to array
 *     * @n: number of elements of an array
 *      *
 *       * Return: Nothing
 *        */

void reverse_array(int *a, int n)
{
		int temp, i;

			n = n - 1;
				i = 0;
					while (i <= n)
							{
										temp = a[i];
												a[i++] = a[n];
														a[n--] = temp;
															}
}
