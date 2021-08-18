#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(void)
{
  int I;
  float A[16];
  ifstream ARQBIN("ARQ3.DBC", ios_base::binary);
  ARQBIN.read(reinterpret_cast<char*>(&A), sizeof(A));
  for (I = 0; I < 16; I++)
    {
      cout << "Elemento " << setw(2) << I + 1 << " = ";
      cout << A[I] << endl;
    }
  ARQBIN.close();
  return 0;
}
