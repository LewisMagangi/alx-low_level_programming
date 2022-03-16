#include "main.h"
/**
 * _isalpha - a function that checks if c is a letter
 *
 * @c: single letter input
 * Returns 1 if c is a letter else returns 1
 */
int _isalpha(int c)
{
if (((c >= '65')) && ((c <= '90')) || ((c >= '97')) && ((c <= '122')))
{
return (1);
}
else
{
return (0);
}
}
