#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int s[10] = { 1, 0, 3, 2, 5, 4, 7, 6, 9, 8 };
	printf("정렬 전 배열 s => 1 0 3 2 5 4 7 6 9 8\n");
	printf("정렬 후 배열 s => ");
	int* p = s;
	int num;

	for (int i = 0; i < 9; i++) {
		for (int k = i + 1; k < 10; k++) {
			if (*(p + i) > *(p + k)) {
				num = *(p + i);
				*(p + i) = *(p + k);
				*(p + k) = num;
			}
		}
	}//
	for (int i = 0; i < 10; i++) {
		printf("%d ", s[i]);
	}
}