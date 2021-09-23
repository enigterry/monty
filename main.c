#include "monty.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 if success
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char *buffer = NULL, *string;
	size_t char_count = 0;
	unsigned int line_no = 1;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(&buffer, &char_count, file) != -1)
	{
		if (*buffer != '\n')
		{
			string = strtok(buffer, "\n");
			process_string(&stack, string, line_no);
		}
		line_no++;
	}

	fclose(file);
	free(buffer);
	if (stack != NULL)
		free_stack(&stack, line_no);
	return (EXIT_SUCCESS);
}
