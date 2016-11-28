/* Including Standart libraries */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Defining */
#define SIZE 100

/* Function Prototypes */

void CreateRandomArray(int size, int *array);
void DisplayArray(int size, int *array);
void BubbleSort(int size, int *array);

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

	BubbleSort(SIZE, a);

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
void BubbleSort(int size, int *array)
{
	int i, j, temp;

	for (i = 0; i < (size - 1); ++i)
		for (j = 0; j < size - 1 - i; ++j)
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
}