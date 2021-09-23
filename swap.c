#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: double pointer to stack
 * @line_no: current line number in source file
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_no)
{
	int temp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_no);
		free_stack(stack, line_no);
		exit(EXIT_FAILURE);
	}

	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
