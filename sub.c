#include "monty.h"

/**
 * sub - subtracts the top two elements of the stack
 * @stack: double pointer to stack
 * @line_no: current line number in source file
 * Return: void
 */
void sub(stack_t **stack, unsigned int line_no)
{
	int diff;
	stack_t *temp, *next;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_no);
		free_stack(stack, line_no);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	next = (*stack)->next;

	diff = next->n - temp->n;
	next->n = diff;

	*stack = next;
	free(temp);
}
