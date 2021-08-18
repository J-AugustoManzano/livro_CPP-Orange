#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int B, E, P, I;
  cout << "Entre o valor da base ......: "; cin >> B;
  cout << "Entre o valor da expoente ..: "; cin >> E;
  P = 1;
  I = 1;
  do
    {
      P *= B;
      I++;
    }
  while (I <= E);
  cout << "Potencia = " << P << endl;
  return 0;
}
