#include <iostream>
#include "D:\Practice LABTASKS for upcoming semester\LAB1\Header.h"
using namespace std;

int main() {
	int arr[] = { 1,2 };
	int size = 2;
	//cout << sumArray(arr, size);

	reverseArray(arr, 2);
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}




	return 0;
}