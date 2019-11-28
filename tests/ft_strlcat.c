#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int main()
{
  char *dest;
  int res;

  if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
    memset(dest, 0, 15);
	memset(dest, 'r', 6);

  dest[10] = 'a';
  printf("%zu \n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 0));
}
