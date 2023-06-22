#include "monty.h"

/**
 * go - Operators
 *
 * @op_f: Char pointer
 * @l: line
 * @stak: stack
 *
 * Return: Void
 */


void (*go(char *op_f, unsigned int l, stack_t **stak))(stack_t**, unsigned int)
{
	int count;

	instruction_t operation[] = {
		{"pall", g_pall},
		{"add", g_add},
		{"pint", g_pint},
		{"swap", g_swap},
		{"pop", g_pop},
		{"sub", g_sub},
		{"div", g_div},
		{"mul", g_mul},
		{"mod", g_mod},
		{"nop", g_nop},
		{"rotl", g_rotl},
		{"rotr", g_rotr},
		{"pchar", g_pchar},
		{"pstr", g_pstr},
		{NULL, NULL}
	};

	for (count = 0; operation[count].opcode != NULL; count++)
	{
		if (strcmp(operation[count].opcode, op_f) == 0)
		{
			return (operation[count].f);
		}
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", l, op_f);
	fclose(file);
	g_free(*stak);
	exit(EXIT_FAILURE);
}
