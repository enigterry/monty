#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: double pointer to stack
 * @line_no: current line number in source file
 * Return: void
 */
void rotl(stack_t **stack, unsigned int line_no)
{
	stack_t *temp;
	(void) line_no;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return;
	temp = *stack;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = *stack;
	(*stack)->prev = temp;

	*stack = (*stack)->next;
	(*stack)->prev = NULL;

	temp->next->next = NULL;
}
