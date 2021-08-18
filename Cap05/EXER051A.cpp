#include <iostream>
#include <iomanip>
using namespace std;

int I, S, N;

int somatorio(void);

int main(void)
{
  cin >> N;
  somatorio();
  return 0;
}

int somatorio(void)
{
  S = 0;
  for (I = 1; I <= N; I++)
    S += I;
  cout << "Soma = " << setw(5) << S << endl;
  return 0;
}

