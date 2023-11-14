#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define STUDENTS 3
#define EXAMS 4



int minimum(const int grade[][EXAMS], int row, int col) {
	int i = 0;
	int j = 0;
	int low = 100;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (grade[i][j] < low) {
				low = grade[i][j];
			}
		}
	}return low;
}

int maximum(const int grade[][EXAMS], int row, int col) {
	int i = 0;
	int j = 0;
	int high = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (grade[i][j] >high) {
				high = grade[i][j];
			}
		}
	}return high;
}

double average(const int grade[], float test) {
	int sum = 0;

	for (int i = 0; i < test; i++) {
		sum += grade[i];
	}

	return (double)(sum / test);
}

void printArray(const int grade[][EXAMS], int row, int col) {
	printf("%17s[0]  [1]  [2]  [3]", " ");
	for (int i = 0; i < row; i++) {
		printf("\nstudentGrade[%d] ", i);
		for (int j = 0; j < col; j++) {
			printf("%5d", grade[i][j]);
		}
	}
}

int main() {
	const int studentGrades[STUDENTS][EXAMS] = { {77,68,86,73},{96,87,89,78},{70,90,86,81} };

	printf("The array is :\n");
	printArray(studentGrades, STUDENTS, EXAMS);

	printf("\n\nLowest grade: %d\nHightest grade: %d\n", minimum(studentGrades, STUDENTS, EXAMS), maximum(studentGrades, STUDENTS, EXAMS));

	for (int i = 0; i < STUDENTS; i++) {
		printf("The average grade for student %d is %.2f\n", i, average(studentGrades[i], EXAMS));
	}
}
