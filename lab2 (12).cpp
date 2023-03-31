#include <bits/stdc++.h>
using namespace std;



void madSort(int arr[], int n)//75 32 47
{
	int i, key, j;
	for (i = 1; i < n; i++) //i=1
	{
		key = arr[i]; //key = 32
		j = i - 1; // j=0
        while (j >= 0 && arr[j] > key) //true
		{
			arr[j + 1] = arr[j]; //75 75 47
			j = j - 1; //
		}
		arr[j + 1] = key; //32 75 47
		
	}
}




int main()
{
    int n;
    cin>>n;
    
	int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
	

	madSort(arr, n);
	for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

	return 0;
}

