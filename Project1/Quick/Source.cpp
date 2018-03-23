#include <iostream>
using namespace std;
void quick(int [], int, int);
int main() {
	const int n = 6;
	int a[n] = { 10,7,8,9,1,5};

	quick(a, 0, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
	system("PAUSE");
	return 0;
}
void quick(int a[], int low, int high) {
	int max = a[high - 1],i = low;
	for (int j = low; j < high; j++)
		if (a[j] <= max) {
			if(a[j] != a[i]){					
				a[i] ^= a[j];
				a[j] ^= a[i];
				a[i] ^= a[j];		
			}
			i++;
		}
	if (i == high)return;
	quick(a, low, i);
	quick(a, i, high);
}
