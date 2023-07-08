#include "hash_tables.h"

/**
 * shash_table_create - prototype that creates a hash table.
 * @size: parameter for size of the array.
 * Return: a pointer to the new hash table, NULL for errorr.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
/*introducing variable parameters*/
unsigned long int k;
shash_table_t *ht;

ht = malloc(sizeof(shash_table_t));
/*check for error*/
if (ht == NULL)
return (NULL);

ht->size = size;
ht->array = malloc(sizeof(shash_node_t *) * size);
/*check for error*/
if (ht->array == NULL)
return (NULL);
/*introducing conditional statement*/
for (k = 0; k < size; k++)
ht->array[k] = NULL;
ht->shead = NULL;
ht->stail = NULL;
/*Returns a pointer to the newly created hash table*/
return (ht);
}

/**
 * shash_table_set - prototype that adds an element to the hash table.
 * @ht: parameter for hash table.
 * @key: parameter for key to add and cannot be an empty string.
 * @value: parameter for associated value with key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
char *tmp;
shash_node_t *k, *retval;
unsigned long int index;

/*check for error*/
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);

tmp = strdup(value);
if (tmp == NULL)
return (0);

index = key_index((const unsigned char *)key, ht->size);
/*introducing loop conditional statement*/
k = ht->shead;
while (k)
{
if (strcmp(k->key, key) == 0)
{
free(k->value);
k->value = tmp;
return (1);
}
k = k->snext;
}

retval = malloc(sizeof(shash_node_t));
if (retval == NULL)
{
free(tmp);
return (0);
}
retval->key = strdup(key);
if (retval->key == NULL)
{
free(tmp);
free(retval);
return (0);
}
retval->value = tmp;
retval->next = ht->array[index];
ht->array[index] = retval;

if (ht->shead == NULL)
{
retval->sprev = NULL;
retval->snext = NULL;
ht->shead = retval;
ht->stail = retval;
}
else if (strcmp(ht->shead->key, key) > 0)
{
retval->sprev = NULL;
retval->snext = ht->shead;
ht->shead->sprev = retval;
ht->shead = retval;
}
else
{
k = ht->shead;
while (k->snext != NULL && strcmp(k->snext->key, key) < 0)
k = k->snext;
retval->sprev = k;
retval->snext = k->snext;
if (k->snext == NULL)
ht->stail = retval;
else
k->snext->sprev = retval;
k->snext = retval;
}
/*Returns: 1 if it succeeded*/
return (1);
}


/**
 * shash_table_get - prototype that retrieves a value associated with a key
 * @ht: parameter for hash table.
 * @key: parameter for key.
 * Return: associated with the element, or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
/*introducing variable parameters*/
unsigned long int tmp;
shash_node_t *retval;

/*check for error*/
if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

tmp = key_index((const unsigned char *)key, ht->size);
if (tmp >= ht->size)
return (NULL);

/*introducing conditional statement*/
retval = ht->shead;
while (retval != NULL && strcmp(retval->key, key) != 0)
retval = retval->next;

return ((retval == NULL) ? NULL : retval->value);
}

/**
 * shash_table_print - prototype that prints a hash table.
 * @ht: parameter for hash table.
 * Description: Key/value are appear in order as it’s in hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *retval;

/*check for errors*/
if (ht == NULL)
return;

retval = ht->shead;
printf("{");
/*introducing conditional statement for outputs*/
while (retval != NULL)
{
printf("'%s': '%s'", retval->key, retval->value);
retval = retval->snext;
if (retval != NULL)
printf(", ");
}
printf("}\n");
}


/**
 * shash_table_print_rev - prototype that prints sorted hash table in reverse order.
 * @ht: parameter for sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
/*introducing variable parameter*/
shash_node_t *retval;

/*check for errors*/
if (ht == NULL)
return;

retval = ht->stail;
printf("{");
/*introducing conditional statement for outputs*/
while (retval != NULL)
{
printf("'%s': '%s'", retval->key, retval->value);
retval = retval->sprev;
if (retval != NULL)
printf(", ");
}
printf("}\n");
}

/**
 * shash_table_delete - prototype that deletes a hash table.
 * @ht: parameter for hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
/*introducing variable parameter*/
shash_table_t *top = ht;
shash_node_t *retval, *k;

/*check for errors*/
if (ht == NULL)
return;

retval = ht->shead;
/*introducing conditional statement for outputs*/
while (retval)
{
k = retval->snext;
free(retval->key);
free(retval->value);
free(retval);
retval = k;
}

free(top->array);
free(top);
}
