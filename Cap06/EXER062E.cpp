#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  float A[3][3];
  int I, J;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);

  // Entrada de dados

  cout << "\nInforme dados da matriz A" << endl;
  for (I = 0; I <= 2; I ++)
    {
      cout << "\nColuna ...: " << I + 1 << endl;
      for (J = 0; J <= 2; J ++)
        {
          cout << "Linha ....: " << J + 1 << " -> ";
          cin >> A[I][J];
        }
    }

  // Processamento e saida

  cout << "\nResultado" << endl;
  for (I = 0; I <= 2; I ++)
    for (J = 0; J <= 2; J ++)
      if (I == J)
        cout << "Dado: " << setw(8) << A[I][J] * 2 << endl;
      else
        cout << "Dado: " << setw(8) << A[I][J] * 3 << endl;
      cout << endl;

  return 0;
}
