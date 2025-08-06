#include <stdio.h>

int main()
{
	int i = 49;
	int j = -5;
	char ch = 'G';
	char st[20] = "banana";
	unsigned int h = 123;
	void *ptr;

	printf("%i ", i);
	printf("%u ", i);
	printf("%d ", i);
	printf("%c ", i);
	printf("%x ", i);
	printf("%X\n", i);

	printf("%i ", j);
	printf("%u ", j);
	printf("%d ", j);
	printf("%c ", j);
	printf("%x ", j);
	printf("%X\n", j);

	printf("%i ", ch);
	printf("%u ", ch);
	printf("%d ", ch);
	printf("%c\n", ch);

	// printf("%i ", st);
	// printf("%u ", st);
	// printf("%d ", st);
	// printf("%c ", st);
	printf("%s\n", st);

	printf("%p\n", ptr);
}