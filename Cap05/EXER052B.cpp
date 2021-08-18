#include <iostream>
#include <iomanip>
using namespace std;

int prestacao(float VALOR, float TAXA, float TEMPO);

int main(void)
{
  float VLR, TX, TMP;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cout << "Valor ......: "; cin >> VLR;
  cout << "Taxa .......: "; cin >> TX;
  cout << "Tempo ......: "; cin >> TMP;
  prestacao(VLR, TX, TMP);
  return 0;
}

int prestacao(float VALOR, float TAXA, float TEMPO)
{
  float PREST;
  PREST = VALOR + (VALOR * (TAXA/100) * TEMPO);
  cout << "Prestacao = " << setw(5) << PREST << endl;
  return 0;
}

