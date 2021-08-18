#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  float A[4][4];
  int I, J;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);

  // Entrada de dados

  cout << "\nInforme dados da matriz A" << endl;
  for (I = 0; I <= 3; I ++)
    {
      cout << "\nColuna ...: " << I + 1 << endl;
      for (J = 0; J <= 3; J ++)
        {
          cout << "Linha ....: " << J + 1 << " -> ";
          cin >> A[I][J];
        }
    }

  // Processamento e saida dos elementos da diagonal principal

  cout << "\nResultado" << endl;
  for (I = 0; I <= 3; I ++)
    for (J = 0; J <= 3; J ++)
      if (I == J)
        cout << "Dado: " << setw(8) << A[I][J] << endl;
      cout << endl;

  return 0;
}
