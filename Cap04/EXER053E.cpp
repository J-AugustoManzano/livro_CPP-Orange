#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int I, R, S;
  S = 0;
  for (I = 1; I <= 50; I++)
    {
      R = I % 2;
      if (R == 0)
        S += I;
    }
  cout << setw(4) << S << endl;
  return 0;
}
