#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int I, S;
  S = 0;
  I = 1;
  do
    {
      S += I;
      I++;
    }
  while (I <= 100);
  cout << "Soma = " << setw(5) << S << endl;
  return 0;
}
