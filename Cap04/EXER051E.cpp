#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int I, R, S;
  S = 0;
  I = 1;
  while (I <= 50)
    {
      R = I % 2;
      if (R == 0)
        S += I;
      I++;
    }
  cout << setw(4) << S << endl;
  return 0;
}
