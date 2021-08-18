#include <iostream>
#include <iomanip>
using namespace std;

int potencia(int B, int E);

int main(void)
{
  int B, E;
  cout << "Entre a base .......: "; cin >> B;
  cout << "Entre a expoente ...: "; cin >> E;
  cout << "Resultado = " << setw(5) << potencia(B, E) << endl;
  return 0;
}

int potencia(int B, int E)
{
  int I, P;
  P = 1;
  for (I = 1; I <= E; I++)
    P *= B;
  return P;
}

