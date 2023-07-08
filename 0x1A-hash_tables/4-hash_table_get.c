#include "hash_tables.h"

/**
 * hash_table_get - prototype that  retrieves a value associated with a key
 * @ht: parameter for hash table.
 * @key: parameter for key.
 * Return: associated with the element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
/*introducing variable parameters*/
unsigned long int tmp;
hash_node_t *retval;

/*check for error*/
if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

tmp = key_index((const unsigned char *)key, ht->size);
if (tmp >= ht->size)
return (NULL);

/*introducing conditional statement*/
retval = ht->array[tmp];
while (retval && strcmp(retval->key, key) != 0)
retval = retval->next;

return ((retval == NULL) ? NULL : retval->value);
}
