#include <iostream>
#include <iomanip>
using namespace std;

float VOLUME, COMPRIMENTO, LARGURA, ALTURA;

int caixa(void);

int main(void)
{
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cout << "Comprimento ..: "; cin >> COMPRIMENTO;
  cout << "Largura ......: "; cin >> LARGURA;
  cout << "Altura .......: "; cin >> ALTURA;
  caixa();
  return 0;
}

int caixa(void)
{
  VOLUME = COMPRIMENTO * LARGURA * ALTURA;
  cout << "Volume = " << setw(5) << VOLUME << endl;
  return 0;
}

