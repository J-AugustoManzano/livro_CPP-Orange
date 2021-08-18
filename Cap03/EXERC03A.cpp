#include <iostream>
using namespace std;

int main(void)
{
  int A, B, DIF;
  cin >> A;
  cin >> B;
  if (A > B)
    DIF = A - B;
  else
    DIF = B - A;
  cout << DIF << endl;
  return 0;
}
