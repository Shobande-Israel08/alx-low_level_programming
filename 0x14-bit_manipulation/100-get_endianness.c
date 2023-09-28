#include "main.h"

/**
 * get_endianness -this checks if a machine is little or big endian
 * Return: 0 for big, 1 for small
 * by israel
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
