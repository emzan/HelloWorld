#include <stdio.h>

int main(int argc, int *argv[])
{
	if (argc < 2)
	{
		puts("Please specify a file name.\n");
		return (1);
	}

	printf("I will specify a file %s\n.", argv[1]);


	return (0);
}

// good luck!