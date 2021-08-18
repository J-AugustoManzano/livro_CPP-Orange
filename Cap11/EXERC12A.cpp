#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(void)
{
  int I, A[10];
  ofstream ARQBIN;
  ARQBIN.open("DADOS11A.DBC", ios_base::binary);
  for (I = 0; I < 10; I++)
    {
      cout << "Digite o elemento " << setw(2) << I + 1 << " - ";
      cin >> A[I];
    }
  ARQBIN.write(reinterpret_cast<char*>(&A), sizeof(A));
  ARQBIN.close();
  return 0;
}
