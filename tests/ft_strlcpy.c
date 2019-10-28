#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char* restrict dst, const char* restrict src, size_t size);

int main()
{
  char  dst[200];
  int res;

  res = ft_strlcpy(dst, "lala", 30);
  printf("%s %d \n", dst, res);

  res = strlcpy(dst, "lala", 30);
  printf("%s %d \n", dst, res);
}