#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{
  float A[10], B[10], PESQ;
  int I, J;
  bool ACHA;
  char RESP;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);

  // Entrada de dados na matriz "A"

  for (I = 0; I <= 9; I++)
    {
      cout << "Informe um valor para o elemento nr. " << setw(2) << I + 1 << ": ";
      cin >> A[I];
    }

  // Processamento dos dados da matriz "B"

  for (I = 0; I <= 9; I++)
    B[I] = A[I] + 2;

  // Apresentacao dos dados por pesquisa sequencial

  do
    {
      cout << "\nEntre o valor a ser pesquisado: "; cin >> PESQ;
      I = 0;
      ACHA = false;
      while (I <= 9 && ACHA == false)
        if (PESQ == B[I])
          ACHA = true;
        else
          I++;
      if (ACHA == true)
        cout << PESQ << " foi localizado na posicao " << I + 1;
      else
        cout << PESQ << " nao foi localizado";
      cout << endl;
      cout << "\n\nContinua? [S]IM/[N]AO + <Enter>: "; cin >> RESP;
      RESP = toupper(RESP);
    }
  while (RESP == 'S');

  return 0;
}
