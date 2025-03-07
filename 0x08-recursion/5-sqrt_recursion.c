#include "main.h"

/**
 * helper - Recursive helper function to find the square root
 * @n: The number to find the square root of
 * @guess: The current guess for the square root
 *
 * Return: The natural square root of n, or -1 if n has no natural square root
 */
int helper(int n, int guess);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Integer input
 *
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper(n, 1));
}

/**
 * helper - Recursive helper function to find the square root
 * @n: The number to find the square root of
 * @guess: The current guess for the square root
 *
 * Return: The natural square root of n, or -1 if n has no natural square root
 */
int helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (helper(n, guess + 1));
}
