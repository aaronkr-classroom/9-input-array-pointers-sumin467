#include <stdio.h>

#define MAX_CH 100

int getMystr(char buffer[], int limit) {
	int i = 0;
	int ch;
	while ((ch = getchar()) != '\n' && ch != EOF) {
		if(i < limit-1) {
			buffer[i++] = (char)ch;
		}
		else {
			while (getchar() != '\n' && getchar() != EOF);
			buffer[i] = '\0';
			return 0;
		}
	}
	buffer[i] = '\0';
	return 1;
}

int main(void) {
	char input_str[MAX_CH];
	int state;

	printf("Enter input: ");	
	state = getMystr(input_str, MAX_CH);

	if (state) printf("input: %s\n", input_str);
	else printf("input: %s -> out of range\n", input_str);

	return 0;
}