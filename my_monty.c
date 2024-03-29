#include "monty.h"

void my_monty(instruction_t *instruction, char *lineptr, int line_number,
		stack_t **stack, FILE * fp, char *av1);
int d[2] = {0, 0};

/**
 * atoi_check - draft
 * @p: draft
 */
void atoi_check(char *p)
{
	int i;

	i = 0;
	while (p[i])
	{
		if (p[i] > 57 || p[i] < 48)
		{
			if (p[i] != '-')
				d[1] = 0;
			break;
		}
		i++;
	}
}

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
	char *p = strtok(lineptr, " \n");
	int i;

	i = 0;
	while (i <= 6 && p)
	{
		if (strcmp(instruction[i].opcode, p) == 0)
		{
			if (i == 0)
			{
				p = strtok(0, " \n");
				if (p && strcmp(p, "0") != 0)
				{
					d[0] = 1;
					d[1] = atoi(p);
				}
				else if (p == NULL)
					d[0] = 1;
				if (p && strcmp(p, "-0") == 0)
					d[0] = 0;
			}
			my_free(0, 0, lineptr, 0, av1);
			printf("%d\n", d[1]);
			instruction[i].f(stack, line_number);
			d[0] = 0;
			d[1] = 0;
			return;
		}
		i++;
	}
	if (p != NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, p);
		my_free(stack, 0, lineptr, fp, av1);
		exit(EXIT_FAILURE);
	}
	else
	{
		d[0] = 0;
		d[1] = 0;
		my_free(0, 0, lineptr, 0, av1);
	}
}
