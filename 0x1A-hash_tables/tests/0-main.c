#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../hash_tables.h"

/**
 *  main - check this code.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
		hash_table_t *ht;

			ht = hash_table_create(1024);
				printf("%p\n", (void *)ht);
					return (EXIT_SUCCESS);
}