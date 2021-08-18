#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int I, QUAD;
  for (I = 15; I <= 200; I++)
    {
      QUAD = I * I;
      cout << "Quadrado de " << setw(3) << I << " = " << setw(5) << QUAD << endl;
    }
  return 0;
}
