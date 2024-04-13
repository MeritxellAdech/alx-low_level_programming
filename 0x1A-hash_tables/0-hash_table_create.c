#include "hash_tables.h"


/**
 * hash_table_create - creates a hash table
 *
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
 * or NULL if an error occures
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	/*giving the table a size*/
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);
	/*assigning nodes to the table*/
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
