#include <stdio.h>

int main(void)
{
	int res;
	res = sizeof(short) > sizeof(long);
	res ? printf("short") : printf("long");

	return 0;
}