#include <iostream>

using namespace std;

int main(void)
{
	int x, m=0;
	cin >> x;
	while(x)
	{
		m=m*10+x%10;
		x=x/10;
	}
	cout << m << endl;
	return 0;
}
