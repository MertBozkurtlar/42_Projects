#include "libft.h"
#include <stdio.h>

int main()
{
	printf("Testler:\n\n");

	printf("Test 1: ft_isalpha\n");
	printf("input: a | output: %d\n", ft_isalpha('a'));
	printf("input: 1 | output: %d\n\n", ft_isalpha('1'));

	printf("Test2: ft_isdigit\n");
	printf("input: 1 | output: %d\n", ft_isdigit('1'));
	printf("input: a | output: %d\n\n", ft_isdigit('a'));

	printf("Test3: ft_isalnum\n");
	printf("input: 1 | output: %d\n", ft_isalnum('1'));
	printf("input: ! | output: %d\n\n", ft_isalnum('!'));

	printf("Test4: ft_isascii\n");
	printf("input: a | output: %d\n", ft_isascii('a'));
	printf("input: 0x80 | output: %d\n\n", ft_isascii(0x80));

	return 0;
}