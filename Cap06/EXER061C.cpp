#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int A[8], B[8], I, J;
  cout << setiosflags(ios::right);

  // Entrada de dados na matriz "A"

  for (I = 0; I <= 7; I++)
    {
      cout << "Informe um valor para o elemento nr. " << setw(2) << I + 1 << ": ";
      cin >> A[I];
    }

  // Processamento dos dados da matriz "B"

  for (I = 0; I <= 7; I ++)
    {
      B[I] = 1;
      for (J = 1; J <= A[I]; J++)
        B[I] *= J;
    }

  // Apresentacao dos dados da matriz "B"

  for (I = 0; I <= 7; I++)
    cout << "\nB[" << setw(2) << I + 1 << "] = " << setw(5) << B[I];
  return 0;
}
