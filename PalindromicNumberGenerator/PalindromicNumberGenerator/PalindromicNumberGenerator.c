#include <stdio.h>
#include <stdlib.h>

int main()
{
	int end = 0;
	int	mid = 0;
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf_s("%d%d%d\n", end, mid, end);
			mid++;
		}
		mid = 0;
		end++;
	}
	return 0;
}