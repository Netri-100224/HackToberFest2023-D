// Given an array A[] consisting of only 0s, 1s, and 2s. The task is to write a function that sorts the given array. 
// The functions should put all 0s first, then all 1s and all 2s in last.

#include <bits/stdc++.h>
using namespace std;
void sort012(int a[], int arr_size)
{
	int lo = 0;
	int hi = arr_size - 1;
	int mid = 0;
	while (mid <= hi) {
		switch (a[mid]) {
		case 0:
			swap(a[lo++], a[mid++]);
			break;
		case 1:
			mid++;
			break;
		case 2:
			swap(a[mid], a[hi--]);
			break;
		}
	}
}
void printArray(int arr[], int arr_size)
{
	
	for (int i = 0; i < arr_size; i++)
		cout << arr[i] << " ";
}
int main()
{
	int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	sort012(arr, n);
	printArray(arr, n);
	return 0;
}
