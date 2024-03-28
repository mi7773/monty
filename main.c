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
	stack_t *stack = NULL;
	int i = 0;
	instruction_t instruction[] = {{"push", my_push}, {"pall", my_pall},
		{"pint", my_pint}, {"pop", my_pop}, {"swap", my_swap},
		{"add", my_add}, {"nop", my_nop}};

	fp = my_fopen(av[1]);
	ac_check(ac);
	while (1)
	{
		lineptr = my_getline(fp);
		if (lineptr == NULL)
		{
			free(lineptr);
			break;
		}
		my_monty(instruction, lineptr, i, &stack, fp, av[1]);
		i++;
	}
	my_free(&stack, 0, 0, fp, av[1]);
	return (0);
}
