#include "hash_tables.h"
/**
 * key_index - Gives the user the index of a key
 * @key: key
 * @size: size of array
 * @Return: Index at which the key or value sholud be stored
 * in thearray of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (!key || !size)
	{
		return (0);
	}
	idx = hash_djb2(key) % size;
	return (idx);
}
