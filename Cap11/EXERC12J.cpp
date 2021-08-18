#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(void)
{
  int I;
  float A[8], B[8], C[16];
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  ifstream ARQBIN1("ARQ1.DBC", ios_base::binary);
  ifstream ARQBIN2("ARQ2.DBC", ios_base::binary);
  ofstream ARQBIN3("ARQ3.DBC", ios_base::binary);
  ARQBIN1.read(reinterpret_cast<char*>(&A), sizeof(A));
  ARQBIN2.read(reinterpret_cast<char*>(&B), sizeof(B));
  for (I = 0; I <= 15; I ++)
    if (I <= 7)
      C[I] = A[I];
    else
      C[I] = B[I - 8];
  ARQBIN3.write(reinterpret_cast<char*>(&C), sizeof(C));
  ARQBIN1.close();
  ARQBIN2.close();
  ARQBIN3.close();
  return 0;
}
