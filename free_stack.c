#include "monty.h"

/**
 * free_stack - remove all elements from the stack
 * @stack: double pointer to stack
 * @line_no: operation code line number in source file
 * Return: void
 */
void free_stack(stack_t **stack, unsigned int line_no)
{
	if (stack == NULL)
		return;
	while (*stack != NULL)
		pop(stack, line_no);
}
