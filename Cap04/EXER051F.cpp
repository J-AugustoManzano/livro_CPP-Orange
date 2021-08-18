#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int I, F, N;
  F = 1;
  I = 1;
  cout << "Entre o valor da fatorial: "; cin >> N;
  while (I <= N)
    {
      F *= I;
      I++;
    }
  cout << "Fatorial = " << setw(5) << F << endl;
  return 0;
}
