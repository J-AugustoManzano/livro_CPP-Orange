#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int I, S;
  S = 0;
  I = 1;
  while (I <= 100)
    {
      S += I;
      I++;
    }
  cout << "Soma = " << setw(5) << S << endl;
  return 0;
}
