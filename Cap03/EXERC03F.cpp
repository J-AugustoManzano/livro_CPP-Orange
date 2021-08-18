#include <iostream>
using namespace std;

int main(void)
{
  int A, B, C, D, R2, R3;
  cin >> A;
  cin >> B;
  cin >> C;
  cin >> D;

  R2 = A - 2 * (A / 2); // ou R2 = A % 2;
  R3 = A - 3 * (A / 3); // ou R3 = A % 3;
  if (R2 == 0 or R3 == 0)
    cout << A << endl;

  R2 = B - 2 * (B / 2); // ou R2 = A % 2;
  R3 = B - 3 * (B / 3); // ou R3 = A % 3;
  if (R2 == 0 or R3 == 0)
    cout << B << endl;

  R2 = C - 2 * (C / 2); // ou R2 = A % 2;
  R3 = C - 3 * (C / 3); // ou R3 = A % 3;
  if (R2 == 0 or R3 == 0)
    cout << C << endl;

  R2 = D - 2 * (D / 2); // ou R2 = A % 2;
  R3 = D - 3 * (D / 3); // ou R3 = A % 3;
  if (R2 == 0 or R3 == 0)
    cout << D << endl;

  return 0;
}
