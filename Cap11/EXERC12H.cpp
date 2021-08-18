#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(void)
{
  int I;
  float A[8], B[8];
  ofstream ARQBIN1("ARQ1.DBC", ios_base::binary);
  ofstream ARQBIN2("ARQ2.DBC", ios_base::binary);
  for (I = 0; I < 8; I++)
    {
      cout << "Digite o elemento " << setw(2) << I + 1 << " da matriz A - ";
      cin >> A[I];
    }
  for (I = 0; I < 8; I++)
    {
      cout << "Digite o elemento " << setw(2) << I + 1 << " da matriz B - ";
      cin >> B[I];
    }
  ARQBIN1.write(reinterpret_cast<char*>(&A), sizeof(A));
  ARQBIN2.write(reinterpret_cast<char*>(&B), sizeof(B));
  ARQBIN1.close();
  ARQBIN2.close();
  return 0;
}
