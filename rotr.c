#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 * @stack: double pointer to stack
 * @line_no: current line number in source file
 * Return: void
 */
void rotr(stack_t **stack, unsigned int line_no)
{
	stack_t *temp;
	(void) line_no;

	if (*stack && (*stack)->next)
	{
		temp = *stack;

		while (temp->next != NULL)
			temp = temp->next;

		temp->prev->next =  NULL;
		temp->next = *stack;
		*stack = temp;
	}
}
