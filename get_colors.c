#include <stdio.h>

int main(void)
{
	int i;
	i =0;

	while(i < 97)
	{
		printf("index: [%i]\033[%im test text \033[0m\n", i, i);
		i++;
	}
	return (0);
}