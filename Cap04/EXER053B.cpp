#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int I, S;
  S = 0;
  for (I = 1; I <= 100; I++)
    S += I;
  cout << "Soma = " << setw(5) << S << endl;
  return 0;
}
