#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: double pointer to stack
 * @line_no: current line number in source file
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_no)
{

	stack_t *temp;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_no);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next != NULL)
	{
		temp = *stack;
		*stack =  temp->next;
		(*stack)->prev = NULL;
		free(temp);
	}
	else
	{
		free(*stack);
		*stack = NULL;
	}
}
