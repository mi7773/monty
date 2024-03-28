#include "monty.h"

/**
 * my_getline - draft
 * @fp: draft
 * @i: draft
 * Return: draft
 */
char *my_getline(FILE *fp, int i)
{
	size_t n = 0;
	ssize_t r;
	char *lineptr = 0;

	while (i)
	{
		r = getline(&lineptr, &n, fp);
		if (r == -1)
		{
			free(lineptr);
			return (0);
		}
		i--;
	}
	return (lineptr);
}
