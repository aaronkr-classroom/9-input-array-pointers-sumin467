#include <stdio.h>

#define STR_MAX 1000
int my_atoi(char string[]) {
	int count = 0, num = 0;
	while (string[count] != 0) {
		if (string[count] == '\n')break;
		num = num * 10 + string[count] - '0';
		count++;
	}
	return num;
}
int main(void) {
	int first_num, second_num;
	char first_str[STR_MAX], second_str[STR_MAX];

	printf("1st num: ");
	gets(first_str);
	printf("2st num: ");
	gets(second_str);

	first_num = my_atoi(first_str);
	second_num = my_atoi(second_str);

	printf("%d + %d =%d\n", first_num, second_num, first_num + second_num);

	return 0;
}