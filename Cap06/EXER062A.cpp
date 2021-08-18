#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int A[5][3], B[5][3], C[5][3], I, J;
  cout << setiosflags(ios::right);

  // Entrada de dados

  cout << "\nInforme dados da matriz A" << endl;
  for (I = 0; I <= 4; I ++)
    {
      cout << "\nColuna ...: " << I + 1 << endl;
      for (J = 0; J <= 2; J ++)
        {
          cout << "Linha ....: " << J + 1 << " -> ";
          cin >> A[I][J];
        }
    }

  cout << "\nInforme dados da matriz B" << endl;
  for (I = 0; I <= 4; I ++)
    {
      cout << "\nColuna ...: " << I + 1 << endl;
      for (J = 0; J <= 2; J ++)
        {
          cout << "Linha ....: " << J + 1 << " -> ";
          cin >> B[I][J];
        }
    }

  // Processamento

  for (I = 0; I <= 4; I ++)
    for (J = 0; J <= 2; J ++)
      C[I][J] = A[I][J] + B[I][J];

  // Saida dos dados

  cout << "\nResultados" << endl;
  for (I = 0; I <= 4; I ++)
    {
      cout << "\nColuna ..: " << I + 1;
      for (J = 0; J <= 2; J ++)
        cout << "\nLinha ....: " << J + 1 << " -> " << C[I][J];
      cout << endl;
    }

  return 0;
}
