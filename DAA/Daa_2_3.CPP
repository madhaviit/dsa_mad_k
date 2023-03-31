#include <bits/stdc++.h>
using namespace std;


int size_of_grid, b, a, cnt = 0;

int arr[128][128];

void Lfill(int x1, int y1, int x2,
		int y2, int x3, int y3)
{
	cnt++;
	arr[x1][y1] = cnt;
	arr[x2][y2] = cnt;
	arr[x3][y3] = cnt;
}

int fill_tiles(int n, int x, int y)
{
	
	if (n == 2) {
		cnt++;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[x + i][y + j] == 0) {
					arr[x + i][y + j] = cnt;
				}
			}
		}
		return 0;
	}

    int r, c;// get hole coords 
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (arr[i][j] != 0)
				r = i, c = j;
		}
	}

	// miss in 1st quadrant
	if (r < x + n / 2 && c < y + n / 2)
		Lfill(x + n / 2, y + (n / 2) - 1, 
            x + n / 2,y + n / 2, 
            x + n / 2 - 1, y + n / 2);
            

	// miss in 3rd quadrant
	else if (r >= x + n / 2 && c < y + n / 2)
		Lfill(x + (n / 2) - 1, y + (n / 2), 
            x + (n / 2),y + n / 2, 
            x + (n / 2) - 1, y + (n / 2) - 1);

	//miss in 2nd quadrant
	else if (r < x + n / 2 && c >= y + n / 2)
		Lfill(x + n / 2, y + (n / 2) - 1, 
            x + n / 2, y + n / 2, 
            x + n / 2 - 1, y + n / 2 - 1);

	//miss in 4th quadrant
	else if (r >= x + n / 2 && c >= y + n / 2)
		Lfill(x + (n / 2) - 1, y + (n / 2), 
            x + (n / 2),y + (n / 2) - 1,
            x + (n / 2) - 1,y + (n / 2) - 1);

	// dividing it again in 4 quadrants
	fill_tiles(n / 2, x, y + n / 2);
	fill_tiles(n / 2, x, y);
	fill_tiles(n / 2, x + n / 2, y);
	fill_tiles(n / 2, x + n / 2, y + n / 2);

	return 0;
}




int main()
{
	// size of board
	size_of_grid = 4;
	memset(arr, 0, sizeof(arr));

	a = 0, b = 0;// missing
    arr[a][b] = -1;
	
    fill_tiles(size_of_grid, 0, 0);

//ans
	for (int i = 0; i < size_of_grid; i++) {
		for (int j = 0; j < size_of_grid; j++)
			cout << arr[i][j] << " \t";
		cout<<"\n";
	}
}