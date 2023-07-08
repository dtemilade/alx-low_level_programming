#include "hash_tables.h"

/**
 * hash_table_print - prototype that prints a hash table.
 * @ht: parameter for hash table.
 * Description: Key/value are appear in order as it’s in hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
/*introducing variable parameters*/
unsigned char fvar = 0;
hash_node_t *retval;
unsigned long int k;

if (ht == NULL)
return;

printf("{");
for (k = 0; k < ht->size; k++)
{
if (ht->array[k] != NULL)
{
if (fvar == 1)
printf(", ");

/*introducing conditional statement for outputs*/
retval = ht->array[k];
while (retval != NULL)
{
printf("'%s': '%s'", retval->key, retval->value);
retval = retval->next;
if (retval != NULL)
printf(", ");
}
fvar = 1;
}
}
printf("}\n");
}
