#include "hash_tables.h"
/**
 * hash_djb2 - Hashing function.
 * @str: String to hash.
 * Return: The result of the hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
  unsigned long hash = 5381;
  int x;

  while ((x = *str++))
    hash = ((hash << 5) + hash) + x; /* hash * 33 + x */

  return (hash);
}
