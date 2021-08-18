#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int I, R;
  I = 1;
  while (I < 30)
    {
      R = I % 4;
      if (R == 0)
        cout << setw(3) << I << endl;
      I++;
    }
  return 0;
}
