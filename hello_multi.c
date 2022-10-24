#include <stdio.h>

int main(void)
{
	int	i;
	int	times;

	i = 0;
	printf("Wie oft soll 'Hello Worls' ausgegeben werden?\n");
	scanf("%d", &times);
	while (i < times)
	{
		printf("Hello World %d\n", i + 1);
		i++;
	}
	return (0);
}
