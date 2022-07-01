#ifndef hash_table
#define hash_table

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>


/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The keyy, string
 * The key is unique in the Hashtable
 * @value: The value corresponding to a key
 * @next: Pointer to the next node of the List
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;


/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this arrau is a pointer to the first node of a linked lis,
 * because we want our HashTable to use a Chaining collision handling
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;


#endif
