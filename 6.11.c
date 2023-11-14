#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int num[10], u=0,d=0;
	void printfresult(int d);
	printf("Enter ten number:");
	for (int k = 0; k < 10; k++) {
		scanf("%d", &num[k]);
		printf(" ");
	}
	int n = 9, temp;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < n; j++) {
			if (num[j] > num[j + 1]) {
				temp = num[j + 1];
				num[j + 1] = num[j];
				num[j] = temp;
				u++;
			}
		}
		if (u == 0) {
			break;
		}
		else {
			u = 0;
			n--;
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", num[i]);
	}
}