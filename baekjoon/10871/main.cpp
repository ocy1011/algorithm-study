#include <iostream>
using namespace std;
int main()
{
  int N, X;
  int array[10001];
  cin >> N >> X;
  for (int i = 0; i < N; i++)
    cin >> array[i];
  for (int i = 0; i < N; i++)
    if (array[i] < X)
      cout << array[i] << " ";
  cout << "\n";
  return 0;
}