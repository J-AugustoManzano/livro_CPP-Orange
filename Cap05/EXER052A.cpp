#include <iostream>
#include <iomanip>
using namespace std;

int somatorio(int X);

int main(void)
{
  int N;
  cin >> N;
  somatorio(N);
  return 0;
}

int somatorio(int X)
{
  int I, S;
  S = 0;
  for (I = 1; I <= X; I++)
    S += I;
  cout << "Soma = " << setw(5) << S << endl;
  return 0;
}

