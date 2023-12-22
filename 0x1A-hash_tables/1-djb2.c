#include "hash_tables.h"

/**
 * hash_djb2 - Calculate the hash value of a string using djb2 algorithm
 * @str: The string to hash
 *
 * Return: The 64-bit hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		/**
		 * The hash calculation using djb2 algorithm:
		 * hash * 33 + c
		 */
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}
