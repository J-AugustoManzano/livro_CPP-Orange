#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(void)
{
  int R2, R3, I, A[10];
  ifstream ARQBIN;
  ARQBIN.open("DADOS11A.DBC", ios_base::binary);
  ARQBIN.read(reinterpret_cast<char*>(&A), sizeof(A));
  for (I = 0; I < 10; I++)
    {
      R2 = A[I] % 2;
      R3 = A[I] % 3;
      if (R2 == 0 and R3 == 0)
      {
        cout << "Posicao = " << setw(2) << I + 1 << " | Elemento = ";
        cout << A[I] << endl;
      }
    }
  ARQBIN.close();
  return 0;
}
