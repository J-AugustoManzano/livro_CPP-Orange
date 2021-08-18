#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{
  int A[8], B[8], I, J, X, COMECO, FINAL, MEIO, PESQ;
  bool ACHA;
  char RESP;
  cout << setiosflags(ios::right);

  // Entrada de dados na matriz "A"

  for (I = 0; I <= 7; I++)
    {
      cout << "Informe um valor para o elemento nr. " << setw(2) << I + 1 << ": ";
      cin >> A[I];
    }

  // Processamento dos dados da matriz "B"

  for (I = 0; I <= 7; I++)
    B[I] = A[I] * 5;

  // Classificacao dos valores da matriz B

  for (I = 0; I <= 7; I++)
    for (J = I + 1; J <= 8; J++)
      if (B[I] > B[J])
        {
          X = B[I];
          B[I] = B[J];
          B[J] = X;
        }

  // Apresentacao dos dados ordenados da matriz "B"

  for (I = 0; I <= 7; I++)
    cout << "\nB[" << setw(2) << I + 1 << "] = " << setw(3) << B[I];
  cout << endl;

  // Pesquisa binaria de conteudo

  do
    {
      cout << "\nEntre o valor a ser pesquisado: "; cin >> PESQ;
      COMECO = 0;
      FINAL = 9;
      ACHA = false;
      while (COMECO <= FINAL && ACHA == false)
        {
          MEIO = (COMECO + FINAL) / 2;
          if (PESQ == B[MEIO])
            ACHA = true;
          else
            if (PESQ < B[MEIO])
              FINAL = MEIO - 1;
            else
              COMECO = MEIO + 1;
        }
        if (ACHA == true)
          cout << PESQ << " foi localizado na posicao " << MEIO + 1;
        else
          cout << PESQ << " nao foi localizado";
      cout << endl;
      cout << "\n\nContinua? [S]IM/[N]AO + <Enter>: "; cin >> RESP;
      RESP = toupper(RESP);
    }
  while (RESP == 'S');

  return 0;
}
