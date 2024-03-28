#include "monty.h"

/**
 * my_free - draft
 * @stack: draft
 */
void my_free(stack_t **stack)
{
	if (*stack == NULL)
	{
		return;
	}
	else
	{
		stack_t *p = *stack;

		while (p)
		{
			*stack = (*stack)->prev;
			free(p);
			p = *stack;
		}
	}
}
