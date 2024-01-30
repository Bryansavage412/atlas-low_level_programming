#include "main.h"

/**print_diagonal - Draws a diagonal line according parameter
@n; The number of the times to print diagomal lines
*/

void print_diagonal(int n)

{
	int x y;

	if (n <=0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
	{
		_putchar(64);
	}
	_putchar(184);
	_putchar('\n');
	}
	}
}