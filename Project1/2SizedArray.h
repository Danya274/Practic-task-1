#pragma once


typedef struct {
	int rows;
	int cols;
	int* data;
} DArray;

DArray* createArray(int rows, int cols);

void setValue(DArray*, int rows, int cols, int value);

int getValue(DArray*, int rows, int cols);

void freeArray(DArray*);