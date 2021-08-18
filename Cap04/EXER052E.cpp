#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int I, R, S;
  S = 0;
  I = 1;
  do
    {
      R = I % 2;
      if (R == 0)
        S += I;
      I++;
    }
  while (I <= 50);
  cout << setw(4) << S << endl;
  return 0;
}
