#include "monty.h"

/**
 * my_free - draft
 * @stack: draft
 * @c: draft
 * @lineptr: draft
 * @fp: draft
 * @av1: draft
 */
void my_free(stack_t **stack, char *c, char *lineptr, FILE *fp, char *av1)
{
	if (*stack != NULL)
	{
		stack_t *p = *stack;

		while (p)
		{
			*stack = (*stack)->prev;
			free(p);
			p = *stack;
		}
	}
	if (fp != NULL && av1 != NULL)
	{
		my_fclose(fp, av1);
	}
	if (lineptr != NULL)
	{
		free(lineptr);
	}
	if (c != NULL)
	{
		free(c);
	}
}
