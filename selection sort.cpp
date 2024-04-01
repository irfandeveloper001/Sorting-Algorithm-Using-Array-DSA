#include <iostream>
using namespace std;
void selectionSort(int array[], int n)
{
	cout <<"Before Sorting\n\n";
	for(int i=0; i<n; i++)
	{
		cout << i+1<< " =   " << array[i] <<endl;
	}
	int small;
	for(int i=0; i<n-1; i++)
	{
	    small = i;
	    for(int j=i+1; j<n; j++)
	    {
	    	if (array[j] > array[small])
	    	{
	    		small = j;
			}
		}
		if (small != i)
		{
			int temp = array[i];
			array[i] = array[small];
			array[small] = temp;
		}
	}
	cout <<"After Sorting\n\n";
	for(int i=0; i<n; i++)
	{
		cout << i+1<< " =     " << array[i] <<endl;
	}
}
int main()
{
	int n=10;
	int array[n];
	for (int i=0; i<n; i++)
	{
		cout <<"Enter the " << i+1 << " number: ";
		cin >> array[i];
	}
	selectionSort(array, n);
}
