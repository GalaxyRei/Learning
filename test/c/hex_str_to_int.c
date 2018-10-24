#include <stdio.h>
#include <stdlib.h>

int main()
{
	const char *hexstring = "0xabcdef0";
	int number = (int)strtol(hexstring, NULL, 0);

	printf("after convert:%d.\n", number);
	return 0;
}
