#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(void)
{
  int R, I, A[10];
  ifstream ARQBIN;
  ARQBIN.open("DADOS11A.DBC", ios_base::binary);
  ARQBIN.read(reinterpret_cast<char*>(&A), sizeof(A));
  for (I = 0; I < 10; I++)
    {
      R = A[I] % 2;
      if (R == 0)
      {
        cout << "Posicao = " << setw(2) << I + 1 << " | Elemento = ";
        cout << A[I] << endl;
      }
    }
  ARQBIN.close();
  return 0;
}
