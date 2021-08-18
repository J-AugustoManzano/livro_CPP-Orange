#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int A[10], B[10], I, J, X;
  cout << setiosflags(ios::right);

  // Entrada de dados na matriz "A"

  for (I = 0; I <= 9; I++)
    {
      cout << "Informe um valor para o elemento nr. " << setw(2) << I + 1 << ": ";
      cin >> A[I];
    }

  // Processamento dos dados da matriz "B"

  for (I = 0; I <= 9; I ++)
    {
      B[I] = 1;
      for (J = 1; J <= A[I]; J++)
        B[I] *= J;
    }

  // Classificacao dos valores da matriz "B"

  for (I = 0; I <= 8; I++)
    for (J = I + 1; J <= 9; J++)
      if (B[I] > B[J])
        {
          X = B[I];
          B[I] = B[J];
          B[J] = X;
        }

  // Apresentacao dos dados da matriz "B"

  for (I = 0; I <= 9; I++)
    cout << "\nB[" << setw(2) << I + 1 << "] = " << setw(7) << B[I];
  return 0;
}
