#include "hash_tables.h"

/**
 * key_index - prototype that gives you the index of a key.
 * @key: parameter for key.
 * @size: parameter for size of the array of the hash table.
 * Return:  index at which the key/value pair should be stored
 * Description: function that use the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/*Return:  index at which the key/value pair should be stored*/
	return (hash_djb2(key) % size);
}
