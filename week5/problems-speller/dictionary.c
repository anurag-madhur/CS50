/**
 * Implements a dictionary's functionality.
 */

#include <stdbool.h>
#include <string.h>
 #include <stdlib.h>

#include "dictionary.h"

/**
 * Returns true if word is in dictionary else false.
 */
 struct Node
 {
 	char word[LENGTH+1];
 	struct Node * link;
 }node;
 struct Node *hashtable[26];
 
bool check(const char *word)
{
    // TODO
    return false;


}

/**
 * Loads dictionary into memory. Returns true if successful else false.
 */
bool load(const char *dictionary)
{
    // TODO
	FILE *inptr;
	inptr = fopen("large", "r+");
	while(fscanf(inptr, "%s", node.word) != EOF)
	{
		struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
		if(new_node == NULL)
		{
			unload;
			return false;
		}
		strcpy(new_node->word,node.word);

		//break;
	}
    return false;
}

/**
 * Returns number of words in dictionary if loaded else 0 if not yet loaded.
 */
unsigned int size(void)
{
    // TODO
    return 0;
}

/**
 * Unloads dictionary from memory. Returns true if successful else false.
 */
bool unload(void)
{
    // TODO
    return false;
}
