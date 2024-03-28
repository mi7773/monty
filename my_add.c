#include "monty.h"

/**
 * my_add - draft
 * @stack: draft
 * @line_number: draft
 */
void my_add(stack_t **stack, unsigned int line_number)
{
	stack_t *p = *stack;
	int i;

	i = 0;
	while (p)
	{
		p = p->prev;
		i++;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		if (stack != NULL)
		{
			my_free(stack, 0, 0, 0, 0);
		}
		exit(EXIT_FAILURE);
	}
	else
	{
		stack_t *p = *stack;

		i = p->n + (p->prev)->n;
		*stack = (*stack)->prev;
		(*stack)->n = i;
		(*stack)->next = NULL;
		free(p);
	}
}
