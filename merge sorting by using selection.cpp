#include<iostream>
using namespace std;
void mergeSorting(int array[], int n)
{
	cout<<"\nBefore sorting\n\n";
	for(int i=0; i<n; i++)
	{
		cout<<array[i] << " , ";
	}
	cout << endl;
	int s,e,m,n1,n2;
	s=0;
	e=n;
	m=n/2;
	n1 = m-s-1;
	n2 = e-m;
	int small;
	int left[n1], right[n2];
	for(int i=0; i<=n1; i++)
	{
		  left[i] = array[i];
	}
	for(int j=0; j<n2; j++)
	{
		right[j] = array[m+j] ;
	}
	
	
	
		for(int i=0; i<=n1; i++)
	{
		 small = i;
		for(int j=i+1; j<=n1; j++)
		{
			
			if(left[j] < left[small])
			{
				small =j;
			}
			
		}
		if(small != i)
		{
			int temp = left[i];
			left[i] =  left[small];
			left[small] = temp;
		}
	}
	
		
		for(int i=0; i<n2; i++)
	{
		 small = i;
		for(int j=i+1; j<n2; j++)
		{
			
			if(left[j] < left[small])
			{
				small =j;
			}
			
		}
		if(small != i)
		{
			int temp = left[i];
			left[i] =  left[small];
			left[small] = temp;
		}
	}
	


    int i=0, j=0, k=0;
    while(i<=n1 && j<n2)
    {
    	if(left[i] <= right[j])
    	{
    		array[k] = left[i];
    		k++;
    		i++;
		}
		else
		{
			array[k] = right[j];
    		k++;
    		j++;
		}
	}
	while(i<=n1)
	{
		array[k] = left[i];
		k++;
		i++;
	}
	while(j<n2)
	{
		array[k] = right[j];
		k++;
		j++;
	}
	cout<<"\nAfter sorting\n\n";
	for(int i=0; i<n; i++)
	{
		cout<<array[i] << " , ";
	}
}
int main()
{
	int n=10;
	int array[n] = {6,8,2,8,9,1,3,2,7,5};
	mergeSorting(array, n);
}
