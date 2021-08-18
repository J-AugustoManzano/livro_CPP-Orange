#include <iostream>
using namespace std;

int main(void)
{
  int A, B, C, D, E, X, Y;
  cin >> A;
  cin >> B;
  cin >> C;
  cin >> D;
  cin >> E;
  X = A;
  if (X > B)
    X = B;
  if (X > C)
    X = C;
  if (X > D)
    X = D;
  if (X > E)
    X = E;
  Y = A;
  if (Y < B)
    Y = B;
  if (Y < C)
    Y = C;
  if (Y < D)
    Y = D;
  if (Y < E)
    Y = E;
  cout << "Maior = " << X << endl;
  cout << "Menor = " << Y << endl;
  return 0;
}
