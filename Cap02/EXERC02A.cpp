#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
  float TEMPO, VELOCIDADE, DISTANCIA, LITROS_USADOS;
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  cin >> TEMPO;
  cin >> VELOCIDADE;
  DISTANCIA = TEMPO * VELOCIDADE;
  LITROS_USADOS = DISTANCIA / 12;
  cout << setw(8) << TEMPO << endl;
  cout << setw(8) << VELOCIDADE << endl;
  cout << setw(8) << DISTANCIA << endl;
  cout << setw(8) << LITROS_USADOS << endl;
  return 0;
}
