#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: 2D array representing the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}
