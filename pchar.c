#include "monty.h"

/**
 * pchar - prints the ascii value of int at the top of the stack,
 * followed by a new line.
 * @stack: double pointer to stack
 * @line_no: current line number in source file
 * Return: void
 */
void pchar(stack_t **stack, unsigned int line_no)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_no);
		exit(EXIT_FAILURE);
	}

	if (!((*stack)->n >= 0 && (*stack)->n <= 127))
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_no);
		free_stack(stack, line_no);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
