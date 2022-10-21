#include "hash_tables.h"
/**
 * key_index - Gives the index of a key
 * @key: key
 * @size: array size
 * @Return: index at which index/value shold be stored in array
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
