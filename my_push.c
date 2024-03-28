#include "monty.h"

/**
 * my_push - draft
 * @stack: draft
 * @line_number: draft
 */
void my_push(stack_t **stack, unsigned int line_number)
{
	if (d != 0)
	{
		stack_t *p = NULL;

		p = (stack_t *) malloc(sizeof(stack_t));
		if (p == NULL)
		{
			fprintf(stderr, "Error: malloc failed\n");
			if (stack != NULL)
			{
				my_free(stack, 0, 0, 0, 0);
			}
			exit(EXIT_FAILURE);
		}
		if (*stack == NULL)
		{
			p->n = d;
			p->prev = NULL;
			p->next = NULL;
		}
		else
		{
			p->n = d;
			p->prev = *stack;
			p->next = NULL;
			(*stack)->next = p;
		}
		*stack = p;
	}
}
