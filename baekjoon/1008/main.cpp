#include <iostream>
using namespace std;
int main()
{
  int A, B;
  double result;
  cin >> A >> B;
  result = (double)A / B;
  cout.precision(10);
  cout << result << endl;
  return 0;
}