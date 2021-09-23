#ifndef MONTY_HD
#define MONTY_HD
#define  _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


extern int value;
int value;

void process_string(stack_t **stack, char *string, unsigned int line_no);
void push(stack_t **stack, unsigned int line_number);
void perform_operation(stack_t **stack, char *tokens, unsigned int line_no);
int check_digit(char *token);
void pall(stack_t **stack, unsigned int line_no);
void pint(stack_t **stack, unsigned int line_no);
void pop(stack_t **stack, unsigned int line_no);
void swap(stack_t **stack, unsigned int line_no);
void add(stack_t **stack, unsigned int line_no);
void free_stack(stack_t **stack, unsigned int line_no);
void nop(stack_t **stack, unsigned int line_no);
void sub(stack_t **stack, unsigned int line_no);
void op_div(stack_t **stack, unsigned int line_no);
void mul(stack_t **stack, unsigned int line_no);
void mod(stack_t **stack, unsigned int line_no);
void pchar(stack_t **stack, unsigned int line_no);
void pstr(stack_t **stack, unsigned int line_no);
void rotl(stack_t **stack, unsigned int line_no);
void rotr(stack_t **stack, unsigned int line_no);

#endif
