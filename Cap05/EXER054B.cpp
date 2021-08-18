#include <iostream>
#include <iomanip>
using namespace std;

float prestacao(float VALOR, float TAXA, float TEMPO);

int main(void)
{
  float VLR, TX, TMP;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cout << "Valor ......: "; cin >> VLR;
  cout << "Taxa .......: "; cin >> TX;
  cout << "Tempo ......: "; cin >> TMP;
  cout << "Prestacao = " << setw(5) << prestacao(VLR, TX, TMP) << endl;
  return 0;
}

float prestacao(float VALOR, float TAXA, float TEMPO)
{
  float PREST;
  PREST = VALOR + (VALOR * (TAXA/100) * TEMPO);
  return PREST;
}

