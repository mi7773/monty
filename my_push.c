#include "monty.h"

/**
 * my_push - draft
 * @stack: draft
 * @line_number: draft
 */
void my_push(stack_t **stack, unsigned int line_number)
{
	stack_t *p = NULL;

	if (d !=0)
	{
		p = (stack_t *) malloc(sizeof(stack_t));
		if (p == NULL)
		{
			fprintf(stderr, "Error: malloc failed\n");
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
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
}
