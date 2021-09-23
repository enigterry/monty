#include "monty.h"

/**
 * mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack.
 * @stack: double pointer to stack
 * @line_no: current line number in source file
 * Return: void
 */
void mod(stack_t **stack, unsigned int line_no)
{
	int result;
	stack_t *temp, *next;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_no);
		free_stack(stack, line_no);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	next = (*stack)->next;

	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_no);
		free_stack(stack, line_no);
		exit(EXIT_FAILURE);
	}

	result = next->n % temp->n;
	next->n = result;

	*stack = next;
	free(temp);
}
