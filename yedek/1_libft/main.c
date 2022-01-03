#include <stdio.h>
#include "libft.h"

int main()
{
	printf("Testler:\n\n");

	printf("Test 1: ft_isalpha\n");
	printf("input: HelLo | output: %d\n", ft_isalpha("HelLo"));
	printf("input: 12!aw42 | output: %d\n\n", ft_isalpha("12!aw42"));

	printf("Test2: ft_isdigit\n");
	printf("input: 12456789 | output: %d\n", ft_isdigit("12456789"));
	printf("input: 12asd@ | output: %d\n\n", ft_isdigit("12asd@"));

	printf("Test3: ft_isalnum\n");
	printf("input: 124fsagaA9 | output: %d\n", ft_isalnum("124fsagaA9"));
	printf("input: 12asd@ | output: %d\n\n", ft_isalnum("12asd@"));

	printf("Test4: ft_isascii\n");
	printf("input: 124fsagaA9 | output: %d\n", ft_isascii("124fsagaA9"));
	printf("input: ğĞşŞ | output: %d\n\n", ft_isascii("ğĞşŞ@"));
	
	
	return 0;
}