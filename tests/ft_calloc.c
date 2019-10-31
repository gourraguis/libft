#include <stdio.h>

void	*ft_calloc(size_t count, size_t size);

int main()
{
	char	*res = ft_calloc(5, sizeof(char));

	res[0] = 'a';
	res[1] = 'b';
	res[3] = 'c';

	printf("%s", res);
}
