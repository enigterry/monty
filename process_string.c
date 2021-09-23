#include "monty.h"

/**
 * process_string - splits string into tokens
 * and continues desired operations
 * @stack: pointer to stack
 * @string: string to split
 * @line_no: current line_no
 * Return: void
 */
void process_string(stack_t **stack, char *string, unsigned int line_no)
{
	char *code;
	char *val;

	code = strtok(string, " ");
	if (code == NULL || *code == ' ' || *code == '\n' || *code == '#')
		return;
	if (strcmp(code, "push") == 0)
	{
		val = strtok(NULL, " ");
		if (!check_digit(val))
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_no);
			free_stack(stack, line_no);
			exit(EXIT_FAILURE);
		}
		value = atoi(val);
		perform_operation(stack, code, line_no);
	}
	else
		perform_operation(stack, code, line_no);
}

/**
 *  check_digit - checks if string is a number
 *  @token: string to check
 *   Return: 1 if number, 0 if not
 */
int check_digit(char *token)
{
	if (token == NULL)
		return (0);
	if (*token == '-')
		token++;
	while (*token != '\0')
	{
		if (!isdigit(*token))
			return (0);
		token++;
	}
	token++;
	return (1);
}
