#include <iostream>
#include <iomanip>
using namespace std;

int caixa(float COMPRIMENTO, float LARGURA, float ALTURA);

int main(void)
{
  float COMPRIMENTO, LARGURA, ALTURA;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cout << "Comprimento ..: "; cin >> COMPRIMENTO;
  cout << "Largura ......: "; cin >> LARGURA;
  cout << "Altura .......: "; cin >> ALTURA;
  caixa(COMPRIMENTO, LARGURA, ALTURA);
  return 0;
}

int caixa(float COMPRIMENTO, float LARGURA, float ALTURA)
{
  float VOLUME;
  VOLUME = COMPRIMENTO * LARGURA * ALTURA;
  cout << "Volume = " << setw(5) << VOLUME << endl;
  return 0;
}

