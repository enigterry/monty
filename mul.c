#include "monty.h"

/**
 * mul - multiplies the top two elements of the stack
 * @stack: double pointer to stack
 * @line_no: current line number in source file
 * Return: void
 */
void mul(stack_t **stack, unsigned int line_no)
{
	int result;
	stack_t *temp, *next;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_no);
		free_stack(stack, line_no);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	next = (*stack)->next;

	result = next->n * temp->n;
	next->n = result;

	*stack = next;
	free(temp);
}
