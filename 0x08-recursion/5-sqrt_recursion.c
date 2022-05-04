#include "main.h"
/**
  *_sqrt_recursion-a function that returns the natural square root of a number.
  *@n: Interger input
  *
  *Return: The squareroot of n
  */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else 
		return ( _sqrt_recursion(n ** 1/2));
}
