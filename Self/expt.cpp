#include<iostream>
using namespace std;
int main()
{
	int binary,decimal=0;
	cin>>binary;
	int te=binary,base=1;
	while(te>0)
	{
		decimal=decimal+(te%10)*base;
		te=te/10;
		base=base*2;
	}
	cout<<decimal;
	return 0;
}