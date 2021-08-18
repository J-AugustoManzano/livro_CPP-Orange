#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main(void)
{
  int I, J;
  char A[12][40], B[11][40], C[23][40], X[40];
  cout << "Leitura e apresentacao de nomes\n\n";

  // Entrada dos nomes

  for (I = 0; I <= 11; I++)
    {
      cout << "Informe o " << setw(2) << I + 1 << "o. nome feminino ...: ";
      cin.getline(A[I], sizeof(A[I]));
    }
  cout << endl;

  for (I = 0; I <= 10; I++)
    {
      cout << "Informe o " << setw(2) << I + 1 << "o. nome masculino ..: ";
      cin.getline(B[I], sizeof(B[I]));
    }
  cout << endl;

  // Juncao - Matriz C

  for (I = 0; I <= 22; I ++)
    if (I <= 11)
      strcpy(C[I], A[I]);
    else
      strcpy(C[I], B[I - 12]);

  // Ordenacao de strings

  for (I = 0; I <= 21; I ++)
    for (J = I + 1; J <= 22; J ++)
      if (strcmp(C[I], C[J]) > 0)
        {
          strcpy(X, C[I]);
          strcpy(C[I], C[J]);
          strcpy(C[J], X);
        }

  // Apresentacao dos nomes

  for (I = 0; I <= 22; I++)
    cout << setw(2) << I + 1 << " nome: " << C[I] << endl;

  return 0;
}
