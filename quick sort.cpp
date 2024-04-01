#include <iostream>
using namespace std;
void print(int array[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout <<array[i] << "  ";
	}
}

int partition(int array[], int low, int high)
{
	int pivot = array[low];
	int i = low+1;
	int j = high;
	int temp;
	do
	{
	while(array[i] <=pivot)
	{
		i++;
	}
	while(array[j] > pivot)
	{
		j--;
	}
	if(i<j)
	{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}
}
	while(i<j);
	temp = array[low];
	array[low] = array[j];
	array[j] = temp;
	return j;
}
void quickSort(int array[], int low, int high)
{
	int pi;
	if (low < high)
	{
	pi = partition(array, low, high);
	quickSort(array, low, pi-1);
	quickSort(array, pi+1, high);
    }
}

int main()
{
	int n=8;
	int array[n] = {6,2,8,7,1,3,8,4};
	cout <<"before Sorting\n";
	print(array, n);
	quickSort(array, 0, n-1);
	cout <<"\nAfter sortingz\n";
	print(array, n);
}
