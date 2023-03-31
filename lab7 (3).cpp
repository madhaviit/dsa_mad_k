#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define forn(i, n) for (int i = 0; i < int(n); i++)

double H[100];
int size = -1;

int prnt(int i)
{

	return (i - 1) / 2;
}

int lc(int i)
{

	return ((2 * i) + 1);
}


int rc(int i)
{

	return ((2 * i) + 2);
}

void upwardShift(int i)
{
	while (i > 0 && H[prnt(i)] < H[i]) {

		// Swap prnt and current element
		swap(H[prnt(i)], H[i]);

		// Update i to prnt of i
		i = prnt(i);
	}
}

void downwardShift(int i)
{
	int maxIndex = i;

	// Left Child
	int l = lc(i);

	if (l <= size && H[l] > H[maxIndex]) {
		maxIndex = l;
	}

	// Right Child
	int r = rc(i);

	if (r <= size && H[r] > H[maxIndex]) {
		maxIndex = r;
	}

	// If i not same as maxIndex
	if (i != maxIndex) {
		swap(H[i], H[maxIndex]);
		downwardShift(maxIndex);
	}
}

void insert(double p)
{
	size = size + 1;
	H[size] = p;

	// Shift Up to maintain heap property
	upwardShift(size);
}

double popMax()
{
	double result = H[0];


	H[0] = H[size];
	size = size - 1;


	downwardShift(0);
	return result;
}


void changep(int i, double p)
{
	double oldp = H[i];
	H[i] = p;

	if (p > oldp) {
		upwardShift(i);
	}
	else {
		downwardShift(i);
	}
}


double maxp()
{

	return H[0];
}


void remove(int i)
{
	H[i] = maxp() + 1;


	upwardShift(i);

	popMax();
}


void solve(){
    int n,k;
    cout<<"enter no of elements ";
    cin>>n;
    cout<<"enter k ";
    cin>>k;
    double mad[n];
    for (int i = 0; i < n; i++)
    {
        cin>>mad[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            insert(double(mad[i]/mad[j]));
        }
        
    }
    for (int i = 0; i < ((n*(n-1))/2)-k; i++)
    {
        double mad;
        mad = popMax();
        cout<<"required fraction ";
        cout<<mad<<endl;
    }
    
    
}

int main(){
    solve();
    return 0;
}





