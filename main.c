#include "monty.h"

/**
 * main - draft
 * @ac: draft
 * @av: draft
 * Return: draft
 */
int main(int ac, char **av)
{
	FILE *fp = NULL;
	char *lineptr = NULL;
	stack_t *stack;
	int i = 0;
	instruction_t instruction[] = {{"push", my_push}, {"pall", my_pall},
		{"pint", my_pint}, {"pop", my_pop}, {"swap", my_swap},
		{"add", my_add}, {"nop", my_nop}};

	ac_check(ac);
	fp = my_fopen(av[1]);
	while (1)
	{
		lineptr = my_getline(fp);
		if (lineptr == NULL)
		{
			break;
		}
		my_monty(instruction, lineptr, i, &stack);
		i++;
	}
	my_fclose(fp, av[1]);
	return (0);
}
