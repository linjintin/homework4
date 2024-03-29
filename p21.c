#include<stdio.h>
#include<stdlib.h>

void staticArrayInit() {
	static int array[3];

	printf("\nValue on entering staticArrayInit:\n");
	for (int i = 0; i < 3; i++) printf("array[%d] = %d ", i, array[i]);

	printf("\nValue on exiting staticArrayInit:\n");
	for (int i = 0; i < 3; i++) {
		printf("array[%d] = %d ", i, array[i] += 5);
	}
}

void automaticArrayInit() {
	int array[3] = {1,2,3};


	printf("\nValue on entering automaticArrayInit:\n");
	for (int i = 0; i < 3; i++) printf("array[%d] = %d", i, array[i]);

	printf("\nValue on exiting automaticArrayInit:\n");
	for (int i = 0; i < 3; i++) {
		printf("array[%d] = %d", i, array[i] += 5);
	}
}

int main() {
	printf("First call to each function:\n");
	staticArrayInit();
	automaticArrayInit();

	printf("\n\nSecond call to each function:\n");
	staticArrayInit();
	automaticArrayInit();
	printf("\n");
}
