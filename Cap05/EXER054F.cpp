#include <iostream>
#include <iomanip>
using namespace std;

float caixa(float COMPRIMENTO, float LARGURA, float ALTURA);

int main(void)
{
  float COMPRIMENTO, LARGURA, ALTURA;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cout << "Comprimento ..: "; cin >> COMPRIMENTO;
  cout << "Largura ......: "; cin >> LARGURA;
  cout << "Altura .......: "; cin >> ALTURA;
  cout << "Volume = " << setw(5) << caixa(COMPRIMENTO, LARGURA, ALTURA) << endl;
  return 0;
}

float caixa(float COMPRIMENTO, float LARGURA, float ALTURA)
{
  float VOLUME;
  VOLUME = COMPRIMENTO * LARGURA * ALTURA;
  return VOLUME;
}

