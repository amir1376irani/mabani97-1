#include <iostream>
using namespace std;
template <class T>
T max(T v1,T v2,T v3)
{
	T maxv=v1;
	if (v2>maxv)
		maxv=v2;
	if (v3>maxv)
		maxv=v3;
		return maxv;
};
int main()
{
int a1,a2,a3;
cin>>a1>>a2>>a3;
cout<<max(a1,a2,a3);
return 0;
}
