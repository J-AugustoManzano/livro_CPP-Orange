#include <iostream>
#include <iomanip>
using namespace std;

int potencia(int B, int E, int *P);

int main(void)
{
  int B, E, R;
  cout << "Entre a base .......: "; cin >> B;
  cout << "Entre a expoente ...: "; cin >> E;
  potencia(B, E, &R);
  cout << "Resultado = " << setw(5) << R << endl;
  return 0;
}

int potencia(int B, int E, int *P)
{
  int I;
  *P = 1;
  for (I = 1; I <= E; I++)
    *P *= B;
  return 0;
}

