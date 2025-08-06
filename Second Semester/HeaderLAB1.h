#pragma once


int sumArray(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}
int* reverseArray(int arr[], int size) {
	int num1, num2;
	int j = size - 1;
	for (int i = 0; i < (size/2); i++) {
		num1 = arr[i];
		num2 = arr[size - i - 1];

		arr[i] = num2;
		arr[size - i - 1] = num1;
	}
	return arr;
}