#define _CRT_SECURE_NO_WARNINGS 1
#include "rearrange.h"

int main()
{
	int n_columns;
	int columns[MAX_COLS];
	char input[MAX_INPUT];
	char output[MAX_INPUT];
	n_columns = read_column_numbers(columns, MAX_COLS);

	while (gets(input) != NULL)
	{
		printf("Oringinal input :%s\n", input);
		rearrange(output, input, n_columns, columns);
		printf("Rearrange line :%s\n", output);
	}
	system("pause");
	return 0;
}