#include <iostream>
#include <iomanip>
using namespace std;

int prestacao(float VALOR, float TAXA, float TEMPO, float *PREST);

int main(void)
{
  float VLR, TX, TMP, P;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cout << "Valor ......: "; cin >> VLR;
  cout << "Taxa .......: "; cin >> TX;
  cout << "Tempo ......: "; cin >> TMP;
  prestacao(VLR, TX, TMP, &P);
  cout << "Prestacao = " << setw(5) << P << endl;
  return 0;
}

int prestacao(float VALOR, float TAXA, float TEMPO, float *PREST)
{
  *PREST = VALOR + (VALOR * (TAXA/100) * TEMPO);
  return 0;
}

