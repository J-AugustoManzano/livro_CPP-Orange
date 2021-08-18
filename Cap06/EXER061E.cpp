#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int A[10], B[10], C[20], I;
  cout << setiosflags(ios::right);

  // Entrada de dados na matriz "A"

  for (I = 0; I <= 9; I++)
    {
      cout << "Informe um valor para o elemento nr. " << setw(2) << I + 1 << " da matriz 'A': ";
      cin >> A[I];
    }

  // Entrada de dados na matriz "B"

  for (I = 0; I <= 9; I++)
    {
      cout << "Informe um valor para o elemento nr. " << setw(2) << I + 1 << " da matriz 'B': ";
      cin >> B[I];
    }

  // Processamento dos dados da matriz "C"

  for (I = 0; I <= 19; I ++)
    if (I <= 9)
      C[I] = A[I];
    else
      C[I] = B[I - 10];

  // Apresentacao dos dados da matriz "C"

  for (I = 0; I <= 19; I++)
    cout << "\nC[" << setw(2) << I + 1 << "] = " << setw(5) << C[I];
  return 0;
}
