#include "main.h"
/**
 * get_endianness - check if it is little or big indian.
 * Return: 1 if it is little and 0 if it is big indian.
 */
int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *c = (char *) &x;

	if (*c == 0x10)
		return (1);
	else
		return (0);
}
