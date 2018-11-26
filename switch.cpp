#include <iostream>

using namespace std;

int main(void)
{
	int a;
	cin >> a;
	if(a==1)
		cout << 1;
	else if(a==2 || a==3)
		cout << 2;
	else if(a==4)
		cout << 4;
	else
		cout << "anything else!";
	switch(a)
	{
		case 1:
			cout << 1;
			break;
		case 2:
		case 3:
			cout << 2;
			break;
		case 4:
			cout << 4;
			break;
			
		default:
			cout << "anything else!";
	}
	return 0;
}
