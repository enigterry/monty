#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack,,
 * followed by a new line.
 * @stack: double pointer to stack
 * @line_no: current line number in source file
 * Return: void
 */
void pstr(stack_t **stack, unsigned int line_no)
{
	stack_t *temp;
	(void) line_no;

	temp = *stack;

	while (temp != NULL)
	{
		if (temp->n == 0 || temp->n < 0 || temp->n > 127)
			break;
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
