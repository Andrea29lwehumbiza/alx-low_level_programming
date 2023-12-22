#include "hash_tables.h"

/**
 * key_index - computes the index for a given key
 * @key: the key (string) to hash
 * @size: size of the hash table
 *
 * Return: index of 'key' using djb2 hash function
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/*
	 * hash_djb2 - hash function using the djb2 algorithm
	 * @str: the string to hash
	 *
	 * Return: the hash value
	 */
	unsigned long int hash_djb2(const unsigned char *str)
	{
		unsigned long int hash = 5381;
		int c;

		while ((c = *str++))
			hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

		return (hash);
	}

	return (hash_djb2(key) % size);
}
