#include <stdio.h>
#include <stdlib.h>

main()
{
	int MB = 0;
	printf("1 << 20 = %d\n", 1 << 20);
	while(malloc(1 << 20))
	{
		++MB;
		printf("Allocated %d MB total\n", MB);
	}
}
