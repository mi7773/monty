#include "monty.h"

void my_monty(instruction_t *instruction, char *lineptr, int line_number,
		stack_t **stack);
int d = 0;

/**
 * my_monty - draft
 * @instruction: draft
 * @lineptr: draft
 * @line_number: draft
 * @stack: draft
 */
void my_monty(instruction_t *instruction, char *lineptr, int line_number,
		stack_t **stack)
{
	size_t l = strlen(lineptr) + 1;
	char *c = (char *) malloc(l * sizeof(char));
	char *p = NULL;
	int i;

	i = 0;
	while (i <= 6)
	{
		c = strcpy(c, lineptr);
		p = strtok(c, " \n");
		while (p)
		{
			if (strcmp(instruction[i].opcode, p) == 0)
			{
				if (i == 0)
				{
					p = strtok(0, " \n");
					d = atoi(p);
				}
				instruction[i].f(stack, line_number);
				free(c);
				return;
			}
			p = strtok(0, " \n");
		}
		c = strcpy(c, lineptr);
		i++;
	}
}
