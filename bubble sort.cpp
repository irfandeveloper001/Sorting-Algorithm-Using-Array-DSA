#include <iostream>
using namespace std;
void bubbleSort(int array[], int n)
{
	cout <<"Before Sorting\n\n";
	for(int i=0; i<n; i++)
	{
		cout << i+1<< " =   " << array[i] <<endl;
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(array[j+1] >array[j])
			{
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
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
	bubbleSort(array, n);
}
