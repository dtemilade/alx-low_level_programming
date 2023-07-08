#include "hash_tables.h"

/**
 * hash_table_set - prototype that adds an element to the hash table.
 * @ht: parameter for hash table.
 * @key: parameter for key to add and cannot be an empty string.
 * @value: parameter for associated value with key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
char *tmp;
unsigned long int k, index;
hash_node_t *retval;

/*check for error*/
if (ht == NULL || key == NULL || value == NULL || *key == '\0')
return (0);
tmp = strdup(value);
if (tmp == NULL)
return (0);
index = key_index((const unsigned char *)key, ht->size);
/*introducing loop conditional statement*/
for (k = index; ht->array[k]; k++)
{
if (strcmp(ht->array[k]->key, key) == 0)
{
free(ht->array[k]->value);
ht->array[k]->value = tmp;
return (1);
}
}
retval = malloc(sizeof(hash_node_t));
if (retval == NULL)
{
free(tmp);
return (0);
}
retval->key = strdup(key);
if (retval->key == NULL)
{
free(retval);
return (0);
}
retval->value = tmp;
retval->next = ht->array[index];
ht->array[index] = retval;
/*Returns: 1 if it succeeded*/
return (1);
}
