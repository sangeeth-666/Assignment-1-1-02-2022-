#include <math.h>
#include <stdio.h>


void insertSort(int a[], int n)
{
	int i, temp, j;
	for (i = 1; i < n; i++) {
		temp = a[i];
		j = i - 1;

		while (j >= 0 && a[j] > temp) {
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = temp;
	}
}


void print(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}

int main()
{
	int a[] = { 12, 11, 13, 5, 6 };
	int n = sizeof(a) / sizeof(a[0]);
    printf("Before inserting an array:\n");
    print(a,n);
	insertSort(a, n);
	printf("\nAfter inserting an array:\n");
	print(a, n);

	return 0;
}
