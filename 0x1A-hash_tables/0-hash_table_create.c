#include "hash_tables.h"

/**
 * hash_table_create - prototype that creates a hash table.
 * @size: parameter for size of the array.
 * Return: a pointer to the new hash table, NULL for errorr.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
/*introducing variable parameters*/
unsigned long int k;
hash_table_t *ht;

ht = malloc(sizeof(hash_table_t));
/*check for error*/
if (ht == NULL)
return (NULL);

ht->size = size;
ht->array = malloc(sizeof(hash_node_t *) * size);
/*check for error*/
if (ht->array == NULL)
return (NULL);
/*introducing conditional statement*/
for (k = 0; k < size; k++)
ht->array[k] = NULL;
/*Returns a pointer to the newly created hash table*/
return (ht);
}
