#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int main()
{
  printf("%d\n", ft_memcmp("t\200", "t\0", 2));
  printf("%d", memcmp("t\200", "t\0", 2));
}
