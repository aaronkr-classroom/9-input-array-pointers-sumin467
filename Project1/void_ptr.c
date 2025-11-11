#include <stdio.h>

int GetData(void* p_data, char type) {
	int result = 0;
	if (type == 1) result = *(char*)p_data;
	else if (type == 2) result = *(short*)p_data;
	else if (type == 4) result = *(int*)p_data;
	return result;
}
int main(void) {
	int data = 0x12345678;
	printf("0x%X\n", GetData(&data, 2));
	printf("0x%X\n", GetData(&data, 1));
	printf("0x%X\n", GetData(&data, 4));
	return 0;
}