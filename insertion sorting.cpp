#include <iostream>
using namespace std;
void insertionSort(int array[], int n)
{
	int key;
	cout <<"Before Sorting\n\n";
	for(int i=0; i<n; i++)
	{
		cout << i+1<< " =   " << array[i] <<endl;
	}
	for(int i=1; i<n; i++)
	{
		key = array[i];
	   int j=i-1;
	   while(j>=0 && array[j] > key)
	   {
	   	array[j+1] = array[j];
	   	 j--;
	   }
	   array[j+1] = key;
	}
	cout <<"After Sorting\n\n";
	for(int i=0; i<n; i++)
	{
		cout << i+1<< " =     " << array[i] <<endl;
	}
}
	
int main()
{
	int n;
	cout <<"enter the size of an array: ";
	cin >> n;
	int array[n];
	for (int i=0; i<n; i++)
	{
		cout <<"Enter the " << i+1 << " number: ";
		cin >> array[i];
	}
	insertionSort(array, n);
}
