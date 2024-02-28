#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 * or terminate the process with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
        void *ptr;

        ptr = malloc(b);
        if (ptr == NULL)
        {
                exit(98);
        }
        return (ptr);
}
