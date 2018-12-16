#include <iostream>

using namespace std;

int
main (void)
{
  int max, n;
  cin >> n;
  if (!n)
    return 0;
  else if (n == 1)
    {
      cin >> max;
      cout << max << endl;
      return 0;
    }
  int *arr = new int[n];	// int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  max = arr[0];
  for (int i = 1; i < n; i++)
    max = (max < arr[i] ? arr[i] : max);
  cout << max << endl;
/*	for(int i = 0;i<n;i++)
		cout << arr[i] << ' ';*/
  return 0;
}
