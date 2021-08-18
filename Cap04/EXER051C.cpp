#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int I, R;
  I = 0;
  while (I <= 20)
    {
      R = I % 2;
      if (R != 0)
        cout << setw(3) << I << endl;
      I++;
    }
  return 0;
}
