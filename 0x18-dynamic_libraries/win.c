#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int rand(void)
{
	return 42;
}

void puts(const char *str)
{
	printf("Please make me win!\n");
}
