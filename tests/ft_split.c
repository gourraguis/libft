#include <stdio.h>

char	**ft_split(char const *s, char c);

int main() {
	char **res = ft_split("aazbbzcc", 'z');

	printf("%s\n%s\n%s\n%s", res[0], res[1], res[2], res[3]);
}
