#include <iostream>

using namespace std;

int a[5] = { 1, 0, 4, 3, 2 };

void bubble_sort(int a[])
{
	int tmp;
	for (int i = 0; i < 5; i++) { //1
		for (int j = 0; j < 5 - j; j++) { //2
			if (a[j] > a[j + 1]) {
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	bubble_sort(a);

	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}
	return 0;
}