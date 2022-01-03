#include "libft.h"
#include <stdio.h>
#include <strings.h>

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

	printf("Test5: ft_isprint\n");
	printf("input: a | output: %d\n", ft_isprint('a'));
	printf("input: \\n | output: %d\n\n", ft_isprint('\n'));

	printf("Test6: ft_strlen\n");
	printf("input: Hello World! | output: %d\n", ft_strlen("Hello World!"));

	printf("Test7: ft_memset\n");
	char str[13] = "Hello World!";
	printf("input: Hello World!, $, 7 | output: %s\n\n", ft_memset(str,'$',7));

	printf("Test8: ft_bzero\n");
	char str2[13] = "Hello World!";
	ft_bzero(str2, 7);
	printf("input: Hello World!, 7 | output: %s\n\n", str2);

	
	return 0;
}