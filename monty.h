#ifndef MONTY_H
#define MONTY_H
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void ac_check(int ac);
void fopen_check(FILE *fp, char *av1);
char *mygetl(FILE *fp);
void fclose_check(int fclose_r, char *av1);
void my_opcodes(char *lineptr);
char **mystok(char *s, char *d, char **r);
int cdel(char *str, char del);
void malloc_check(char *p);
void dmalloc_check(char **p);
void my_opcodes(char *lineptr);
int my_check(char *s, char *c);

#endif /* MONTY_H */
