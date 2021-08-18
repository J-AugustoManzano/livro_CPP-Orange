#include <iostream>
#include <iomanip>
using namespace std;

int somatorio(int X, int *Y);

int main(void)
{
  int N, X;
  cin >> N;
  somatorio(N, &X);
  cout << "Soma = " << setw(5) << X << endl;
  return 0;
}

int somatorio(int X, int *S)
{
  int I;
  *S = 0;
  for (I = 1; I <= X; I++)
    *S += I;
  return 0;
}

