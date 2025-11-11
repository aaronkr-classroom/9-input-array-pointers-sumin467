#include <stdio.h>

#define MAX_CHAR 50

int main(void) {
	char input_str[MAX_CHAR];
	printf("카카오뱅크 등록\n");
	printf("이름 입력: ");
	fgets(input_str,MAX_CHAR, stdin );
	printf("%s님 환영합니다", input_str);
	return 0;
}