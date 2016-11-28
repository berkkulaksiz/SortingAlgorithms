/* Including Standart libraries */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Defining */
#define SIZE 100

/* Function Prototypes */

void CreateRandomArray(int size, int *array);
void DisplayArray(int size, int *array);
void QuickSort(int size, int * array, int leftIndex, int rightIndex);

/* Main Begining */

int main(void)
{
	int a[SIZE];

	CreateRandomArray(SIZE, a);
	printf("**********************\n");

	printf("\nArray Initialized...\n");
	printf("\n**********************\n");

	DisplayArray(SIZE, a);
	printf("\n**********************\n");

	QuickSort(SIZE, a, 0, SIZE - 1);

	printf("\nArray Sorted...\n");
	printf("\n**********************\n");

	DisplayArray(SIZE, a);
	printf("\n**********************\n");
	
	return 0;
}

/*Fucntion Definitions*/

void CreateRandomArray(int size, int *array)
{
	int k;
	srand(time(0));
	for (k = 0; k < size; ++k)
		array[k] = rand() % size;
}
void DisplayArray(int size, int *array)
{
	int k;
	for (k = 0; k < size; ++k)
		printf("%d ", array[k]);
}

void QuickSort(int size, int * array, int leftIndex, int rightIndex)
{
	int i = leftIndex, j = rightIndex;
	int tmp;
	int pivot = array[(leftIndex + rightIndex) / 2];

	while (i <= j) {
		while (array[i] < pivot)
			i++;
		while (array[j] > pivot)
			j--;
		if (i <= j) {
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			i++;
			j--;
		}
	};

	if (leftIndex < j)
		QuickSort(SIZE, array, leftIndex, j);
	if (i < rightIndex)
		QuickSort(SIZE, array, i, rightIndex);
}