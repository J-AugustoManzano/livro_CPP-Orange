#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(void)
{
  int I, A[10];
  ifstream ARQBIN;
  ARQBIN.open("DADOS11A.DBC", ios_base::binary);
  ARQBIN.read(reinterpret_cast<char*>(&A), sizeof(A));
  for (I = 0; I < 10; I++)
    {
      cout << "Elemento " << setw(2) << I + 1 << " = ";
      cout << A[I] << endl;
    }
  ARQBIN.close();
  return 0;
}
