#include <iostream>

using namespace std;

int main(void)
{
  int A, B, X;
  cin >> A;
  cin >> B;
  X = A;
  A = B;
  B = X;
  cout << A << endl;
  cout << B << endl;
  return 0;
}
