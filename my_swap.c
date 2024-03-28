#include "monty.h"

/**
 * my_swap- draft
 * @stack: draft
 * @line_number: draft
 */
void my_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *p = *stack;
	int i;

	i = 0;
	while(p)
	{
		p = p->prev;
		i++;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		stack_t *p = *stack;

		p = p->prev;
		i = p->n;
		p->n = (*stack)->n;
		(*stack)->n = i;
	}
}
