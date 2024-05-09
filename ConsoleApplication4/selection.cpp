#include <iostream>

using namespace std;

int a[5] = { 1, 0, 4, 3, 2 };

void selection_sort(int a[], int n)
{
	int min;
	int tmp, index;
	for (int i = 0; i < n - 1; i++) {
		min = INT_MAX; //for문 돌릴때마다 최소갑 초기화
		for (int j = i; j < n; j++) {
			if (min > a[j]) { //최소값 찾기
				min = a[j];
				index = j;
			}
		}
		tmp = a[i];  //현재위치와 최소값과 교환
		a[i] = a[index];
		a[index] = tmp;
	}
}

int main()
{
	selection_sort(a, 5);
	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}
	return 0;
}