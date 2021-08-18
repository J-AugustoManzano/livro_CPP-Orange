#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int I, F, N;
  F = 1;
  cout << "Entre o valor da fatorial: "; cin >> N;
  for (I = 1; I <= N; I++)
    F *= I;
  cout << "Fatorial = " << setw(5) << F << endl;
  return 0;
}
