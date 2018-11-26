#include <iostream>

using namespace std;

int main(void)
{
	int x;
	cin >> x;
	int k=x/2;
	for	(int i=0;i<=k;i++)
	{
		for(int j=0;j<=k+i;j++)
			if(i+j<x/2)
				cout << ' ';
			else
				cout << '*';
		cout << endl;
	}
	return 0;
}
