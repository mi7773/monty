#include "monty.h"

void my_monty(instruction_t *instruction, char *lineptr, int line_number,
		stack_t **stack, FILE * fp, char *av1);
int d = 0;

/**
 * my_monty - draft
 * @instruction: draft
 * @lineptr: draft
 * @line_number: draft
 * @stack: draft
 * @fp: draft
 * @av1: draft
 */
void my_monty(instruction_t *instruction, char *lineptr, int line_number,
		stack_t **stack, FILE *fp, char *av1)
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
					if (p)
					{
						d = atoi(p);
						if (d == 0)
						{
							my_free(0, 0, 0, 0, av1);
						}
					}
				}
				my_free(0, c, lineptr, 0, av1);
				instruction[i].f(stack, line_number);
				d = 0;
				return;
			}
			p = strtok(0, " \n");
		}
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number,
			strtok(lineptr, " \n"));
	my_free(stack, c, lineptr, fp, av1);
	exit(EXIT_FAILURE);
}
