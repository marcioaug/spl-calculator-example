#include <stdio.h>
#include <stdlib.h>
#include "operators.h"

#ifdef INTEGER
#define OUTPUT_FORMAT "%i\n"
#elif REAL
#define OUTPUT_FORMAT "%f\n"
#endif

int main(int argc, char **argv) {

	if (argc != 4) {
		printf("\nUsage:\n\ncalculator <operator> <operand> <operand>");
		exit(EXIT_FAILURE);
	}

	char *operator = argv[1];
#ifdef INTEGER
	int operand_1 = atoi(argv[2]);
	int operand_2 = atoi(argv[3]);
#elif REAL
	float operand_1 = atof(argv[2]);
	float operand_2 = atof(argv[3]);
#endif

#if defined(INTEGER_SUM) || defined(REAL_SUM)
	if (strcmp(operator, "SUM") == 0)
	{
		printf(OUTPUT_FORMAT, sum(operand_1, operand_2));
	} else
#endif
#if defined(INTEGER_SUB) || defined(REAL_SUB)
	if (strcmp(operator, "SUB") == 0)
	{
		printf(OUTPUT_FORMAT, sub(operand_1, operand_2));
	} else
#endif
#if defined(INTEGER_MUL) || defined(REAL_MUL)
    if (strcmp(operator, "MUL") == 0) {
		printf(OUTPUT_FORMAT, mul(operand_1, operand_2));
	} else
#endif
#if defined(INTEGER_DIV) || defined(REAL_DIV)
	if (strcmp(operator, "DIV") == 0) {
		printf(OUTPUT_FORMAT, cdiv(operand_1, operand_2));
	} else
#endif
	{
		fprintf(stderr, "Invalid operator %s.\n", operator);
		exit(EXIT_FAILURE);
	}

	return EXIT_SUCCESS;
}
