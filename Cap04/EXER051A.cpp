#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int I, QUAD;
  I = 15;
  while (I <= 200)
    {
      QUAD = I * I;
      cout << "Quadrado de " << setw(3) << I << " = " << setw(5) << QUAD << endl;
      I++;
    }
  return 0;
}
