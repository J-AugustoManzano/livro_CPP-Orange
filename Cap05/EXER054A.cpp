#include <iostream>
#include <iomanip>
using namespace std;

int somatorio(int X);

int main(void)
{
  int N;
  cin >> N;
  cout << "Soma = " << setw(5) << somatorio(N) << endl;
  return 0;
}

int somatorio(int X)
{
  int I, S;
  S = 0;
  for (I = 1; I <= X; I++)
    S += I;
  return S;
}

