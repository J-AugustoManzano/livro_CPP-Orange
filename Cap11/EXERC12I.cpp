#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(void)
{
  int I;
  float X[8], Y[8], Z[8];
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);
  ifstream ARQBIN1("ARQ1.DBC", ios_base::binary);
  ifstream ARQBIN2("ARQ2.DBC", ios_base::binary);
  ARQBIN1.read(reinterpret_cast<char*>(&X), sizeof(X));
  ARQBIN2.read(reinterpret_cast<char*>(&Y), sizeof(Y));
  for (I = 0; I < 8; I++)
    Z[I] = X[I] + Y[I];
  for (I = 0; I < 8; I++)
    cout << setw(8) << Z[I] << endl;
  ARQBIN1.close();
  ARQBIN2.close();
  return 0;
}
