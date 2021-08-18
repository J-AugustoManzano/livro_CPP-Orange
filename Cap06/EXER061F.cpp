#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int A[5], B[10], C[15], I, R;
  cout << setiosflags(ios::right);

  // Entrada de dados na matriz "A"

  for (I = 0; I <= 4; I++)
    {
      do {
        cout << "Informe um valor 'par' para o elemento nr. " << setw(2) << I + 1 << " da matriz 'A' .....: ";
        cin >> A[I];
        R = A[I] % 2;
      } while (!(R == 0));
    }

  // Entrada de dados na matriz "B"

  for (I = 0; I <= 9; I++)
    {
      do {
        cout << "Informe um valor 'impar' para o elemento nr. " << setw(2) << I + 1 << " da matriz 'B' ...: ";
        cin >> B[I];
        R = B[I] % 2;
      } while (!(R != 0));
    }

  // Processamento dos dados da matriz "C"

  for (I = 0; I <= 14; I ++)
    if (I <= 4)
      C[I] = A[I];
    else
      C[I] = B[I - 5];

  // Apresentacao dos dados da matriz "C"

  for (I = 0; I <= 14; I++)
    cout << "\nC[" << setw(2) << I + 1 << "] = " << setw(5) << C[I];
  return 0;
}
