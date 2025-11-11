#include <stdio.h>

int main(void) {
	char ch;
	printf("Enter chars to read(@ to stop) >>>");
	while ((ch = getc(stdin)) != '@') {
		putchar(ch);
	}

	printf("\nEnd of input");
	return 0;
}