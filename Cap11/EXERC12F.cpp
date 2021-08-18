#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(void)
{
  int I, A[10], B[10], C[10];

  ofstream ARQBIN1;
  ARQBIN1.open("DADOS11F.DBC", ios_base::binary);
  for (I = 0; I < 10; I++)
    {
      cout << "Digite o elemento " << setw(2) << I + 1 << " para a matriz 'A' - ";
      cin >> A[I];
    }
  for (I = 0; I < 10; I++)
    B[I] = A[I] * 2;
  ARQBIN1.write(reinterpret_cast<char*>(&B), sizeof(B));
  ARQBIN1.close();

  ifstream ARQBIN2;
  ARQBIN2.open("DADOS11F.DBC", ios_base::binary);
  ARQBIN2.read(reinterpret_cast<char*>(&C), sizeof(C));
  for (I = 0; I < 10; I++)
    {
      cout << "Elemento " << setw(2) << I + 1 << " = ";
      cout << C[I] << endl;
    }
  ARQBIN2.close();

  return 0;
}
