#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int A[10], B[10], I;
  cout << setiosflags(ios::right);

  // Entrada de dados na matriz "A"

  for (I = 0; I <= 9; I++)
    {
      cout << "Informe um valor para o elemento nr. " << setw(2) << I + 1 << ": ";
      cin >> A[I];
    }

  // Processamento da inversao dos valores entre as matrizes "A" e "B"

  for (I = 0; I <= 9; I ++)
    B[I] = A[9 - I];

  // Apresentacao dos dados da matriz "B"

  for (I = 0; I <= 9; I++)
    {
      cout << "\nA[" << setw(2) << I + 1 << "] = " << setw(3) << A[I];
      cout << " | B[" << setw(2) << I + 1 << "] = " << setw(3) << B[I];
    }
  return 0;
}
