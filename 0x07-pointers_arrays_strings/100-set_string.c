#include "main.h"
/**
  *set_string-a function that sets the value of a pointer to a char.
  *@s: A pointer to a pointer
  *@to: The string to be manipulated
  *
  *Return:
  */
void set_string(char **s, char *to)
{
	*s = to;
}
