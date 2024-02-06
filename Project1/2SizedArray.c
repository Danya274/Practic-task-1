#include <stdlib.h>
#include <stdio.h>

#include "2SizedArray.h"

DArray* createArray(int rows, int cols) {
	DArray* array = (DArray*)malloc(sizeof(DArray*));
	if (!array) {
		return NULL;
	}

	array->rows = rows;
	array->cols = cols;

	array->data = (int*)malloc(rows * cols * sizeof(int));
	if (!array) {
		return NULL;
	}
	return array;
}

void setValue(DArray* array, int row, int col, int value) {
	if (row >= 0 && row < array->rows && col >= 0 && col < array->cols) {
		array->data[row * array->cols + col] = value;
	}
}

int getValue(DArray* array, int row, int col) {
	if (row >= 0 && row < array->rows && col >= 0 && col < array->cols) {
		return array->data[row * array->cols + col];
	}
	return 0;
}

void freeArray(DArray* array) {
	if (array) {
		free(array->data);
		//free(array);
	}
}