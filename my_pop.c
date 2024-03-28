#include "monty.h"

/**
 * my_pop - draft
 * @stack: draft
 * @line_number: draft
 */
void my_pop(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		stack_t *p = *stack;

		*stack = (*stack)->prev;
		free(p);
	}
}
