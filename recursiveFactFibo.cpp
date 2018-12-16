#include <iostream>
using namespace std;
int fibo (int);
int fact (int);
int main()
{
	int n,x;
	cin>>n;
	cout<<"fact: "<<fact(n);
	cin>>x;
	cout<<"fibo: "<<fibo(x);
	return 0;
}
int fact (int n)
{
	if (n==1)
		return 1;
	return n*fact(n-1);
}

int fibo (int x)
{
	if (x==1 || x==2)
		return 1;
	return fibo(x-1)+fibo(x-2);
}
