#include <iostream>

using namespace std;

int
main ()
{
  int x;
  cin >> x;
  if (!(x % 1000))
    {
      for (int i = 1; i <= (x - 1000 - 500) / 2000; i++)
	for (int j = 1; j <= (x - 2000 * i - 500) / 1000; j++)
	  for (int k = 2; k <= (x - 2000 * i - 1000 * j) / 500; k += 2)
	    if (i * 2000 + j * 1000 + k * 500 == x)
	      cout << i << "*2000 + " << j << "*1000 + " << k << "*500" <<
		endl;
    }
  else if (x % 1000 == 500)
    {
      for (int i = 1; i <= (x - 1000 - 500) / 2000; i++)
	for (int j = 1; j <= (x - 2000 * i - 500) / 1000; j++)
	  for (int k = 1; k <= (x - 2000 * i - 1000 * j) / 500; k += 2)
	    if (i * 2000 + j * 1000 + k * 500 == x)
	      cout << i << "*2000 + " << j << "*1000 + " << k << "*500" <<
		endl;
    }
  return 0;
}
