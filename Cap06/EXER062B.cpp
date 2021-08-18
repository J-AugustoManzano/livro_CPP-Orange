#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int A[5], B[5][3], I, J;
  cout << setiosflags(ios::right);

  // Entrada de dados

  cout << "\nInforme dados da matriz A" << endl;
  for (I = 0; I <= 4; I ++)
    {
      cout << "A[" << I + 1 << "] = ";
      cin >> A[I];
    }

  // Processamento

  for (I = 0; I <= 4; I ++)
    {

       B[I][0] = A[I] + 5;

       B[I][1] = 1;
       for (J = 1; J <= A[I]; J ++)
         B[I][1] *= J;

       B[I][2] = A[I] * A[I];
    }

  // Saida dos dados

  cout << "\nResultados" << endl;
  for (I = 0; I <= 4; I ++)
    {
      cout << "B[" << I + 1 << ",1] = " << setw(6) << B[I][0] << " | ";
      cout << "B[" << I + 1 << ",2] = " << setw(6) << B[I][1] << " | ";
      cout << "B[" << I + 1 << ",3] = " << setw(6) << B[I][2] << endl;
    }

  return 0;
}
