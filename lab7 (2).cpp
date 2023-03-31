#include <bits/stdc++.h>
using namespace std;

int H[50];
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

void insert(int p)
{
	size = size + 1;
	H[size] = p;

	// Shift Up to maintain heap property
	upwardShift(size);
}

int popMax()
{
	int result = H[0];


	H[0] = H[size];
	size = size - 1;


	downwardShift(0);
	return result;
}


void changep(int i, int p)
{
	int oldp = H[i];
	H[i] = p;

	if (p > oldp) {
		upwardShift(i);
	}
	else {
		downwardShift(i);
	}
}


int maxp()
{

	return H[0];
}


void remove(int i)
{
	H[i] = maxp() + 1;


	upwardShift(i);

	popMax();
}


int main()
{
    cout<<"enter whatever elements you want in q :\nwhenever you want stop enter 'n' :";
    int q;
    bool cont=1;
    while (cont!=0)
    {
        cin>>q;
        insert(q);
        char z;
        cout<<"wanna add more?(y/n) :";
        cin>>z;
        if (z=='y')
        {
            continue;
        }else
        {
            cont=0;
        }
        
        
    }
    
	int i = 0;

	// pq before poping max
	cout << "pq : ";
	while (i <= size) {
		cout << H[i] << " ";
		i++;
	}

	cout << "\n";

	// element with maximum p
	cout << "element with maximum p : "
		<< popMax() << "\n";

	// pq after poping max
	cout << "pq after "
		<< "poping maximum : ";
	int j = 0;
	while (j <= size) {
		cout << H[j] << " ";
		j++;
	}

	cout << "\n";

	// Change the p of element
	// present at index 2 to 49
	changep(2, 49);
	cout << "pq after "
		<< "p change : ";
	int k = 0;
	while (k <= size) {
		cout << H[k] << " ";
		k++;
	}

	cout << "\n";

	// Remove element at index 3
	remove(3);
	cout << "pq after "
		<< "removing the element : ";
	int l = 0;
	while (l <= size) {
		cout << H[l] << " ";
		l++;
	}
	return 0;
}




