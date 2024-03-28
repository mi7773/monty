#include "monty.h"

/**
 * ac_check - draft
 * @ac: draft
 */
void ac_check(int ac)
{
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
