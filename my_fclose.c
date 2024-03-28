#include "monty.h"

/**
 * my_fclose - draft
 * @fp: draft
 * @av1: draft
 * Return: draft
 */
int my_fclose(FILE *fp, char *av1)
{
	int r;

	r = fclose(fp);
	if (r != 0)
	{
		fprintf(stderr, "Error: Can't close file %s\n", av1);
		exit(EXIT_FAILURE);
	}
	return (r);
}
