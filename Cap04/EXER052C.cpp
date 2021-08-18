#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int I, R;
  I = 0;
  do
    {
      R = I % 2;
      if (R != 0)
        cout << setw(3) << I << endl;
      I++;
    }
  while (I <= 20);
  return 0;
}
