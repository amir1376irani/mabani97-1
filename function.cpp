	#include <iostream>
	using namespace std;
	
	int f1(int a) //1 input (yes)  /  output (yes)	
	{
		return a;
	}

	int f2() //2 input (no)  /  output (yes)
	{
		return 2;
	}

	void f3(int a) //3 input (yes)  /  output (no)
	{
		cout << a << endl;
		return;
	}

	void f4() //4 input (no)  /  output (no)
	{
		cout << 4 << endl;
	}

	int main()
	{
		cout << f1(1) << endl;
		cout << f2() << endl;
		f3(3);
		f4();
		
		return 0;		
	}
