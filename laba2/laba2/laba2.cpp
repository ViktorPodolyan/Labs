// laba2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int a[10];

	//пройти по каждому элементу массива и сравнить
	for (int i = 0; i<10; i++) {
		scanf("%d ", &a[i]);
	}

	int maxI = 0;
	int minI = 0;
	int max = a[0], min = a[0];

	for (int i = 1; i<10; i++) {
		if (a[i]<min) {
			min = a[i];
			minI = i;
		}
	}

	for (int j = 1; j<10; j++) {
		if (a[j]>max) {
			max = a[j];
			maxI = j;
		}
	}
	int temp;
	temp = a[minI];
	a[minI] = a[maxI];
	a[maxI] = temp;
	for (int i = 0; i<10; i++) {
		printf("%d ", a[i]);
	}

	/*Просит вводити 11 символів а виводить 10* але 11 член викидає не дивлячись на те що він може бути більшим або меньшим елементом масива.*/
}