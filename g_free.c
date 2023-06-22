#include "monty.h"

/**
 *  g_free - Free stack
 *
 *  @stack: Stack pointer
 *
 *  Return: Void
 */


void g_free(stack_t *stack)
{
	if (stack)
	{
		g_free(stack->next);
		free(stack);
	}
}
