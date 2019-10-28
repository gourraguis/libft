#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int main()
{
  char dst[200] ="ab";
  char dst2[200] = "ab";
  int res;

  res = ft_strlcat(dst, "lala", 3);
  printf("%s %d \n", dst, res);

  res = strlcat(dst2, "lala", 3);
  printf("%s %d \n", dst, res);
}