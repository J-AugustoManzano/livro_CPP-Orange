#include <iostream>
#include <iomanip>
using namespace std;

int I, P, B, E;

int potencia(void);

int main(void)
{
  cout << "Entre a base .......: "; cin >> B;
  cout << "Entre a expoente ...: "; cin >> E;
  potencia();
  return 0;
}

int potencia(void)
{
  P = 1;
  for (I = 1; I <= E; I++)
    P *= B;
  cout << "Resultado = " << setw(5) << P << endl;
  return 0;
}

