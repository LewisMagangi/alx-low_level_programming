#include "main.h"

/**
 * wildcmp - recursive function that compares two strings
 * @s1: the standard string to compare (no special characters)
 * @s2: the pattern to compare, which may contain wildcards
 *
 * Return: 1 if the patterns match, 0 if they don't
 */
int wildcmp(char *s1, char *s2)
{
	/* Base case: both strings reached their end */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* When encountering a wildcard in the pattern */
	if (*s2 == '*')
	{
		/* Handle adjacent wildcards - ignore duplicates */
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));

		/* Two possibilities with wildcard: match zero characters */
		if (wildcmp(s1, s2 + 1))
			return (1);

		/* Or match one or more characters */
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);
	}

	/* Standard character comparison for non-wildcard characters */
	if (*s1 == *s2 && *s1 != '\0')
		return (wildcmp(s1 + 1, s2 + 1));

	/* No match found through any recursive path */
	return (0);
}
