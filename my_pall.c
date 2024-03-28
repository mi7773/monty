#include "monty.h"

/**
 * my_pall - draft
 * @stack: draft
 * @line_number: draft
 */
void my_pall(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
	if (*stack == NULL)
	{
		return;
	}
	else
	{
		stack_t *p = *stack;

		while (p)
		{
			printf("%d\n", p->n);
			p = p->prev;
		}
	}
}
