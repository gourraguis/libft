#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int main()
{
  printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "", 1000));
  printf("%s", strnstr("lorem ipsum dolor sit amet", "", 1000));
}
