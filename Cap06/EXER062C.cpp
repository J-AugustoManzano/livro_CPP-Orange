#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  float A[4][4], B[4][4], C[4][4];
  int I, J;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);

  // Entrada de dados

  cout << "\nInforme dados da matriz A" << endl;
  for (I = 0; I <= 3; I ++)
    {
      cout << "\nLinha ....: " << I + 1 << endl;
      for (J = 0; J <= 3; J ++)
        {
          cout << "Coluna ...: " << J + 1 << " -> ";
          cin >> A[I][J];
        }
    }

  cout << "\nInforme dados da matriz B" << endl;
  for (I = 0; I <= 3; I ++)
    {
     cout << "\nLinha ....: " << I + 1 << endl;
      for (J = 0; J <= 3; J ++)
        {
          cout << "Coluna ...: " << J + 1 << " -> ";
          cin >> B[I][J];
        }
    }

  // Processamento

  for (I = 0; I <= 3; I ++)
    for (J = 0; J <= 3; J ++)
      C[I][J] = A[I][J] - B[I][J];

  // Saida dos dados

  cout << "\nResultados" << endl;
  for (I = 0; I <= 3; I ++)
    {
      cout << "\nLinha ....: " << I + 1;
      for (J = 0; J <= 3; J ++)
        cout << "\nColuna ..: " << J + 1 << " -> " << setw(8) << C[I][J];
      cout << endl;
    }

  return 0;
}
