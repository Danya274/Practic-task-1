#include <stdio.h>

#include "2SizedArray.h"

//����������� ��������� ������ ����� � �� ����� ��� 2-��� ����������� ������

#define ROWS 4
#define COLS 3

int main() {

	DArray* arr = createArray(ROWS, COLS);
	if (!arr) {
		return NULL;
	}

	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLS; ++j) {
			setValue(arr, i, j, i + j);
		}
	}

	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLS; ++j) {
			printf("%d ", getValue(arr, i, j));
		}
		printf("\n");
	}

	freeArray(arr);

	return 0;
}

