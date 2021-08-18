#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int A[15], B[15], I;
  cout << setiosflags(ios::right);

  // Entrada de dados na matriz "A"

  for (I = 0; I <= 14; I++)
    {
      cout << "Informe um valor para o elemento nr. " << setw(2) << I + 1 << ": ";
      cin >> A[I];
    }

  // Processamento dos dados da matriz "B"

  for (I = 0; I <= 14; I++)
    B[I] = A[I] * A[I];

  // Apresentacao dos dados da matriz "B"

  for (I = 0; I <= 14; I++)
    cout << "\nB[" << setw(2) << I + 1 << "] = " << setw(3) << B[I];
  return 0;
}
