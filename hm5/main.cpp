#include <iostream>
#include <string>
using namespace std;

bool Even(int& K) {
	if (K % 2 == 0) return true;
	else return false;
}

bool IsPowerN(int K, int N) {
	while (true) {
		if (K % N == 0) {
			if (K / N == 1) {
				return true;
			}
			else K /= N;
		}
		else return false;
	}
	return false;
}

void SortInc(int& A, int& B, int& C) {
	if (A > B) std::swap(A, B);
	if (B > C) std::swap(B, C);
	if (A > B) std::swap(A, B);
}

void AddRightDigit(int D, int& K) {
	string res1 = to_string(K) + to_string(D);
	int res2 = stoi(res1);
	std::swap(K, res2);
}

void MinMax(int* Array, int& min, int& max, int len) {
	min = Array[0];
	max = Array[0];
	for (int i = 0; i < len; ++i) {
		if (Array[i] < min) min = Array[i];
		if (Array[i] > max) max = Array[i];
	}
}

int main() {
	int counter = 0;
	int* arr = new int[20] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	for (int i = 0; i < 20; ++i) {
		if (Even(arr[i])) ++counter;
	}
	cout << counter; counter = 0;
	cout << '\n';
	for (int i = 0; i < 20; ++i) {
		if (IsPowerN(arr[i], 2)) ++counter;
	}
	cout << counter; counter = 0;
	cout << '\n';
	delete[] arr;

	int A1 = 4;
	int B1 = 3;
	int C1 = 2;
	SortInc(A1, B1, C1);
	cout << A1 << ' ' << B1 << ' ' << C1 << '\n';
	int A2 = 10;
	int B2 = 12;
	int C2 = 2;
	SortInc(A2, B2, C2);
	cout << A2 << ' ' << B2 << ' ' << C2 << '\n';


	int dig = 1;
	AddRightDigit(2, dig);
	cout << dig << '\n';
	AddRightDigit(3, dig);
	cout << dig << '\n';

	int min;
	int max;
	int* arr1 = new int[21];
	for (int i = -10; i < 11; ++i) {
		arr1[i + 10] = i;
	}
	for (int i = 0; i < 21; ++i) {
		cout << arr1[i];
	}
	std::cout << '\n';
	MinMax(arr1, min, max, 21);
	std::cout << min << ' ' << max << '\n';
	delete[] arr1;
	
	return 0;
}