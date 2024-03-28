#include "monty.h"

/**
 * my_fopen - draft
 * @av1: draft
 * Return: draft
 */
FILE *my_fopen(char *av1)
{
	FILE *fp = NULL;

	fp = fopen(av1, "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av1);
		exit(EXIT_FAILURE);
	}
	return (fp);
}
