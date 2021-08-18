#include <iostream>
#include <iomanip>
using namespace std;

float VALOR, TAXA, TEMPO, PREST;

int prestacao(void);

int main(void)
{
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cout << "Valor ......: "; cin >> VALOR;
  cout << "Taxa .......: "; cin >> TAXA;
  cout << "Tempo ......: "; cin >> TEMPO;
  prestacao();
  return 0;
}

int prestacao(void)
{
  PREST = VALOR + (VALOR * (TAXA/100) * TEMPO);
  cout << "Prestacao = " << setw(5) << PREST << endl;
  return 0;
}

