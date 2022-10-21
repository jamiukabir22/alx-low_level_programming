#include "hash_tables.h"
/**
 * key_index - Gives the index a key in the hash table
 * @key: key
 * @size: array size
 * @Return: index at which index/value will be stored in array
 * of hash table
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
