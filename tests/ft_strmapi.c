#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	dummy(unsigned int i, char c)
{
	return (c + i);
}

int main()
{
	printf("%s", ft_strmapi("aaa", dummy));
}
