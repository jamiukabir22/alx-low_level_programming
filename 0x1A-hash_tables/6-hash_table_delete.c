#include "hash_tables.h"
/**
 * hash_table_delete - delets a hash table
 * @ht: hash table
 * Return: 0
 */
void hash_table_delete(hash_table_t *ht)
{
	size_t i = 0;
	hash_node_t *array = NULL, *temp = NULL;

	if (!ht)
		return;
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			array = ht->array[i];
			while (array)
			{
				free(array->key);
				free(array->value);/*empty*/
				temp = array;
				array = array->next;
				free(temp);
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
