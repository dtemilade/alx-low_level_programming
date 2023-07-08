#include "hash_tables.h"

/**
 * hash_table_delete - prototype that deletes a hash table.
 * @ht: parameter for hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *retval, *c;
hash_table_t *top = ht;
unsigned long int k;

for (k = 0; k < ht->size; k++)
{
if (ht->array[k] != NULL)
{
retval = ht->array[k];
while (retval != NULL)
{
c = retval->next;
free(retval->key);
free(retval->value);
free(retval);
retval = c;
}
}
}
free(top->array);
free(top);
}
