#include <iostream>
using namespace std;

int main(void)
{
  int A, B, C, X;
  cin >> A;
  cin >> B;
  cin >> C;
  if (A > B)
    {
      X = A;
      A = B;
      B = X;
    }
  if (A > C)
    {
      X = A;
      A = C;
      C = X;
    }
  if (B > C)
    {
      X = B;
      B = C;
      C = X;
    }
  cout << A << endl;
  cout << B << endl;
  cout << C << endl;
  return 0;
}
