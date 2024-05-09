#include <iostream>

using namespace std;

int a[5] = { 1, 0, 4, 3, 2 };

void insertion_sort(int a[])
{
	int key, j, i;
	for (i = 1; i < 10; i++) {  // 1
		key = a[i];
		for (j = i - 1; j >= 0 && a[j] > key; j--) {  // 2
			a[j + 1] = a[j];
		}
		a[j + 1] = key; //3
	}

}


int main()
{
	insertion_sort(a);

	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	return 0;
}