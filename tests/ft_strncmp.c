#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int main()
{
	printf("%d\n", ft_strncmp("ab", "ab", 100));
	printf("%d", strncmp("ab", "ab", 100));
}
