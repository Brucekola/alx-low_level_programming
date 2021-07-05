#include "holberton.h"

/**
  * swap_int - Swaps the values of two integers
  *
  * @a: An integer to swap
  * @b: Another integer to swap
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int hold_value;

	hold_value = *a;
	*a = *b;
	*b = hold_value;
}
