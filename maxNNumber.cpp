#include <iostream>

using namespace std;

int
main (void)
{
  int max, n, number;
  cin >> n;
  if (!n)
    return 0;
  else if (n == 1)
    {
      cin >> max;
      cout << max << endl;
      return 0;
    }
  cin >> max;
  n--;
//      for(int i=1;i<n;i++)
  while (n--)
    {
      cin >> number;
      max = (max < number ? number : max);

      /*if(max<number)
         max = number;
         else
         max = max; */
    }
  cout << max << endl;
  return 0;
}
