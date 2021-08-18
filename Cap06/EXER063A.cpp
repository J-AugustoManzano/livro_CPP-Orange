#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main(void)
{
  int I, J;
  char NOME[12][40], X[40];
  cout << "Leitura e apresentacao de nomes\n\n";

  // Entrada dos nomes

  for (I = 0; I <= 11; I++)
    {
      cout << "Informe o " << setw(2) << I + 1 << "o. nome: ";
      cin.getline(NOME[I], sizeof(NOME[I]));
    }
  cout << endl;

  // Classificacao dos nomes

  for (I = 0; I <= 10; I++)
    for (J = I + 1; J <= 11; J++)
      if (strcmp(NOME[I], NOME[J]) < 0)
        {
          strcpy(X, NOME[I]);
          strcpy(NOME[I], NOME[J]);
          strcpy(NOME[J], X);
        }

  // Apresentacao dos nomes

  for (I = 0; I <= 11; I++)
    cout << setw(2) << I + 1 << " nome: " << NOME[I] << endl;

  return 0;
}
